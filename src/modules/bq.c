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
#include <stdint.h>
#include "shell.h"
#include "chprintf.h"
#include "config.h"
#include "shell_cmds.h"
#include "shellconf.h"
#include "bq.h"
#include "bms_logic.h"
#include "protocol_bq76pl455.h"

bq_dev_t device_chain[MAX_DEVICES_IN_CHAIN];

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
	uint8_t i = 0;
	uint8_t lenth = 0;
	uint8_t message[64];
	chRegSetThreadName("BQ Listener Thd");
	chprintf(SHELL_IFACE, "Started BQ Listener thread\r\n");

	while (true) {
	chr = sdGet(&BQ_SD);
	message[i] = chr;
	if (i++ == 0){
		lenth = chr;
	}
	if ((i + 1) == lenth){
		i = 0;
		chprintf(SHELL_IFACE, "Resieved %d bytes: ", lenth);
		for (int j = 1; j <= lenth; j++) {
			chprintf(SHELL_IFACE, " %x", message[j]);
		}
		lenth = 0;
		chprintf(SHELL_IFACE, "\r\n");
	}

	//chprintf(SHELL_IFACE, "BQ received: %x\r\n", chr);

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
	//uint8_t array[7] = {0x81, 0x00, 0x0A, 0x00, 0x2E, 0x9C};
	uint8_t array[7] = {0x89, 0x00, 0x00, 0x0A, 0x00, 0xDA, 0x83};
	uint16_t crc = bq_crc_16_ibm(array, 5);
	array[5] = crc >> 8;
	array[6] = crc & 0xFF;
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

int8_t bq_read_voltages(SerialDriver *sdp, uint8_t dev_num)
{
	bq_msg_t msg;

	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = CMD;
	msg.data_size = DATA_SIZE_1byte;
	msg.dev_addr = dev_num;
	msg.data[0] = 1;
	bq_send_message(sdp, &msg);
}

int8_t bq_configure_initial_sampling_delay(SerialDriver *sdp, uint8_t dev_num)
{
	bq_msg_t msg;

	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_NO_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = SMPL_DLY1;
	msg.data_size = DATA_SIZE_1byte;
	msg.dev_addr = dev_num;
	msg.data[0] = 0; //zero delay
	bq_send_message(sdp, &msg);
}

int8_t bq_configure_internal_sample_period(SerialDriver *sdp, uint8_t dev_num)
{
	bq_msg_t msg;

	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_NO_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = CELL_SPER;
	msg.data_size = DATA_SIZE_1byte;
	msg.dev_addr = dev_num;
	msg.data[0] = 0xBC; //zero delay
	bq_send_message(sdp, &msg);
}

int8_t bq_configure_oversampling_rate(SerialDriver *sdp, uint8_t dev_num)
{
	bq_msg_t msg;

	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_NO_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = OVERSMPL;
	msg.data_size = DATA_SIZE_1byte;
	msg.dev_addr = dev_num;
	msg.data[0] = 0x00; //no oversampling
	bq_send_message(sdp, &msg);
}

int8_t bq_clear_faults(SerialDriver *sdp, uint8_t dev_num)
{
	bq_msg_t msg;

	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_NO_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = STATUS;
	msg.data_size = DATA_SIZE_1byte;
	msg.dev_addr = dev_num;
	msg.data[0] = 0x38; //no oversampling
	bq_send_message(sdp, &msg);
}

int8_t bq_clear_summary_faults_flags(SerialDriver *sdp, uint8_t dev_num)
{
	bq_msg_t msg;

	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_NO_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = FAULT_SUM;
	msg.data_size = DATA_SIZE_2byte;
	msg.dev_addr = dev_num;
	msg.data[0] = 0xFF; //no oversampling
	msg.data[1] = 0xC0; //no oversampling
	bq_send_message(sdp, &msg);
}

int8_t bq_get_system_status(SerialDriver *sdp, uint8_t dev_num)
{
	bq_msg_t msg;

	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = STATUS;
	msg.data_size = DATA_SIZE_1byte;
	msg.dev_addr = dev_num;
	msg.data[0] = 0x00; //no oversampling
	bq_send_message(sdp, &msg);
}

int8_t bq_get_faults_status(SerialDriver *sdp, uint8_t dev_num)
{
	bq_msg_t msg;

	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = FAULT_SUM;
	msg.data_size = DATA_SIZE_1byte;
	msg.dev_addr = dev_num;
	msg.data[0] = 0x00; //no oversampling
	bq_send_message(sdp, &msg);
}

int8_t bq_configure_active_cells(SerialDriver *sdp, uint8_t dev_num, uint8_t num_of_cells)
{
	bq_msg_t msg;

	//Configure active cells
	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_NO_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = NCHAN;
	msg.data_size = DATA_SIZE_1byte;
	msg.dev_addr = dev_num;
	msg.data[0] = num_of_cells; //16 cells init
	bq_send_message(sdp, &msg);
}

int8_t bq_configure_channels(SerialDriver *sdp, uint8_t dev_num)
{
	bq_msg_t msg;

	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_NO_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = CHANNELS;
	msg.data_size = DATA_SIZE_4byte;
	msg.dev_addr = dev_num;
	msg.data[0] = 0xFF; //16 cells init
	msg.data[1] = 0xFF; //16 cells init
	msg.data[2] = 0x00;
	msg.data[3] = 0x00;
	bq_send_message(sdp, &msg);
}

int8_t bq_configure_overvoltage(SerialDriver *sdp, uint8_t dev_num)
{
	bq_msg_t msg;

	uint16_t ov_voltage = bq_convert_mv_to_adc(4200);

	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_NO_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = CELL_OV;
	msg.data_size = DATA_SIZE_2byte;
	msg.dev_addr = dev_num;
	msg.data[0] = ov_voltage >> 8;
	msg.data[1] = ov_voltage & 0xFF;
	bq_send_message(sdp, &msg);
}

int8_t bq_configure_undervoltage(SerialDriver *sdp, uint8_t dev_num)
{
	bq_msg_t msg;

	uint16_t uv_voltage = bq_convert_mv_to_adc(2500);

	msg.frm_type = FRM_TYPE_COMMAND;
	msg.req_type = REQ_TYPE_SINGLE_DEV_WRITE_NO_RESPONSE;
	msg.addr_size = ADDR_SIZE_8bit;
	msg.reg_addr = CELL_UV;
	msg.data_size = DATA_SIZE_2byte;
	msg.dev_addr = dev_num;
	msg.data[0] = uv_voltage >> 8;
	msg.data[1] = uv_voltage & 0xFF;
	bq_send_message(sdp, &msg);
}

int8_t bq_configure_analog_frontend(SerialDriver *sdp, uint8_t dev_num, uint8_t num_of_cells)
{
	bq_msg_t msg;
	chprintf(SHELL_IFACE, "Configuring analog frontend:\r\n\r\n");
	chprintf(SHELL_IFACE, "Setting initial sampling delay...\r\n");
	bq_configure_initial_sampling_delay(sdp, dev_num);
	chThdSleepMilliseconds(1000);

	chprintf(SHELL_IFACE, "Setting internal sample period...\r\n");
	bq_configure_internal_sample_period(sdp, dev_num);
	chThdSleepMilliseconds(1000);

	chprintf(SHELL_IFACE, "Setting oversampling rate...\r\n");
	bq_configure_oversampling_rate(sdp, dev_num);
	chThdSleepMilliseconds(1000);

	chprintf(SHELL_IFACE, "Clearing faults...\r\n");
	bq_clear_faults(sdp, dev_num);
	chThdSleepMilliseconds(1000);

	chprintf(SHELL_IFACE, "Clearing summary faults flags...\r\n");
	bq_clear_summary_faults_flags(sdp, dev_num);
	chThdSleepMilliseconds(1000);

	chprintf(SHELL_IFACE, "System status...\r\n");
	bq_get_system_status(sdp, dev_num);
	chThdSleepMilliseconds(1000);

	chprintf(SHELL_IFACE, "Faults status...\r\n");
	bq_get_faults_status(sdp, dev_num);
	chThdSleepMilliseconds(1000);

	chprintf(SHELL_IFACE, "Setting active cells...\r\n");
	bq_configure_active_cells(sdp, dev_num, num_of_cells);
	chThdSleepMilliseconds(1000);

	chprintf(SHELL_IFACE, "Setting sampling channels...\r\n");
	bq_configure_channels(sdp, dev_num);
	chThdSleepMilliseconds(1000);

	chprintf(SHELL_IFACE, "Setting overvoltage settings...\r\n");
	bq_configure_overvoltage(sdp, dev_num);
	chThdSleepMilliseconds(1000);

	chprintf(SHELL_IFACE, "Setting undervoltage settings...\r\n");
	bq_configure_undervoltage(sdp, dev_num);
	chThdSleepMilliseconds(1000);
}



int8_t bq_send_message(SerialDriver *sdp, bq_msg_t *msg)
{
	uint8_t buffer[20];
	uint16_t crc;
	buffer[0] = msg->frm_type << 7 | msg->req_type << 4 | msg->data_size;
	buffer[1] = msg->dev_addr;
	buffer[2] = msg->reg_addr;
	memcpy(&buffer[3], msg->data, msg->data_size);
	crc = bq_crc_16_ibm(buffer, 3 + msg->data_size);
	buffer[3 + msg->data_size] = crc >> 8;
	buffer[3 + msg->data_size + 1] = crc & 0xFF;
	sdWrite(sdp, buffer, 3 + msg->data_size + 2);
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

uint16_t bq_convert_adc_to_mv(uint16_t adc)
{
	uint16_t res;
	float adc_f = (float)adc;
	res = (uint16_t)(2 * 2.5 / 65535 * adc * 1000);	//from datasheet, page 27
	return res;
}

uint16_t bq_convert_mv_to_adc(uint16_t mv)
{
	uint16_t res;
	float mv_f = (float)mv;
	res = (uint16_t)(mv_f / 1000 * 65535 / 2.5 / 2);
	return res;
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

