/*
 * bq.c
 *
 *  Created on: May 9, 2020
 *      Author: ilia.zarubin
 */

#include "ch.h"
#include "hal.h"
#include <string.h>
#include <stdlib.h>
#include "shell.h"
#include "chprintf.h"
#include "config.h"
#include "shell_cmds.h"
#include "shellconf.h"
#include "bq.h"
#include "bms_logic.h"

dev_t device_chain[MAX_DEVICES_IN_CHAIN];

SerialConfig bq_sd_cfg = {
  /**
   * @brief Bit rate.
   */
       250000,
  /* End of the mandatory fields.*/
  /**
   * @brief Initialization value for the CR1 register.
   */
  0,
  /**
   * @brief Initialization value for the CR2 register.
   */
  USART_CR2_STOP1_BITS,
  /**
   * @brief Initialization value for the CR3 register.
   */
  0
};

static THD_WORKING_AREA(bq_main_thread_wa, 512);
static THD_FUNCTION( bq_main_thread, p) {
	(void) p;
	chRegSetThreadName("BQ Maintenance Thd");
	chprintf(SHELL_IFACE, "Started BQ Maintenance thread\r\n");

	sdStart(&BQ_SD, &bq_sd_cfg);
	bq_start_auto_addressing(&BQ_SD);
	while (true) {
		chThdSleepMilliseconds(1000);
	}
}

static THD_WORKING_AREA(bq_listener_thread_wa, 512);
static THD_FUNCTION( bq_listener_thread, p) {
	(void) p;
	uint8_t chr;
	chRegSetThreadName("BQ Listener Thd");
	chprintf(SHELL_IFACE, "Started BQ Listener thread\r\n");

	while (true) {
	chr = sdGet(&BQ_SD);
	chprintf(SHELL_IFACE, "BQ received: %x\r\n", chr);
	//chThdSleepMilliseconds(1000);
	}
}

int8_t bq_start_auto_addressing(SerialDriver *sdp)
{
	uint8_t array[6] = {0xF1, 0x0A, 0x00, 0x57, 0x53, 0x00};
	chprintf(SHELL_IFACE, "BQ writing\r\n");
	chThdSleepMilliseconds(500);
	sdWrite(sdp, array, 5);
	return 0;
}

int8_t bq_read_address(SerialDriver *sdp)
{
	uint8_t array[7] = {0x89, 0x00, 0x00, 0x0A, 0x00, 0xDA, 0x83};
	chprintf(SHELL_IFACE, "BQ writing\r\n");
	chThdSleepMilliseconds(500);
	sdWrite(sdp, array, 7);
	return 0;
}

int8_t bq_read_faults(SerialDriver *sdp)
{
	uint8_t array[6] = {0x81, 0x00, 0x52, 0x01, 0x75, 0x5C};
	chprintf(SHELL_IFACE, "BQ writing\r\n");
	chThdSleepMilliseconds(500);
	sdWrite(sdp, array, 6);
	return 0;
}

int8_t bq_thread_start(void)
{
	thread_t *res;
	res = chThdCreateStatic(bq_main_thread_wa, sizeof(bq_main_thread_wa), NORMALPRIO + 4, bq_main_thread, NULL);

	if (res == NULL) {
			return -1;
	}

	res = chThdCreateStatic(bq_listener_thread_wa, sizeof(bq_listener_thread_wa), NORMALPRIO + 4, bq_listener_thread, NULL);
	if (res == NULL) {
		return -1;
	} else {
		return 0;
	}
}

int8_t bq_enable_balancing(uint8_t device, uint8_t cell)
{

}

int8_t bq_disable_balancing(uint8_t device, uint8_t cell)
{

}



/**
 * \fn      uint16_T  crc_16_ibm(uint8_T *buf, uint16_T len)
 * \brief   There are many good sources for algorithms and efficient techniques for generating and checking CRCs
            available on the Internet. The following byte-oriented C language routine has been developed and verified as a
            reference. The only complication needed to take into account using this function is that the low byte of the CRC
            value returned is the CRC (MSB) and the high byte is the CRC (LSB)so the last istruction invert the bytes
 * @param   buf     pointer to the message
 * @param   len     dimension of the message
 * @return  crc     resulting CRC-> MSB + LSB
 */
uint16_t bq_crc_16_ibm(uint8_t *buf, uint16_t len) {
	uint16_t crc = 0;
	uint16_t j;
	uint8_t msb, lsb = 0;

	while (len--) {
		crc ^= *buf++;
		for (j = 0; j < 8; j++)
			crc = (crc >> 1) ^ ((crc & 1) ? 0xa001 : 0);
	}

	//read the description, this is the inversion of MSB and LSB
	msb = crc;
	lsb = (crc >> 8);

	crc = msb;
	crc = crc << 8;
	crc += lsb;

	return crc;
}

uint8_t bq_check_crc(uint16_t* buf, uint16_t len, uint16_t crc)
{
	uint16_t crc2 = crc_16_ibm(buf,len);

    if(crc == crc2){
        return 0;
    } else {
        return -1;
    }
}

