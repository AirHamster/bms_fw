/*
 * bq.h
 *
 *  Created on: May 9, 2020
 *      Author: ilia.zarubin
 */

#ifndef INCLUDES_BQ_H_
#define INCLUDES_BQ_H_
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
#include "bms_logic.h"
#include "protocol_bq76pl455.h"



int8_t bq_thread_start(void);
int8_t bq_start_auto_addressing(SerialDriver *sdp);
uint16_t bq_crc_16_ibm(uint8_t *buf, uint16_t len);
uint8_t bq_check_crc(uint16_t* buf, uint16_t len, uint16_t crc);
int8_t bq_read_address(SerialDriver *sdp);
int8_t bq_read_faults(SerialDriver *sdp);
uint16_t bq_crc_16_ibm(uint8_t *buf, uint16_t len);
uint8_t bq_check_crc(uint16_t* buf, uint16_t len, uint16_t crc);
int8_t bq_send_message(SerialDriver *sdp, bq_msg_t *msg);
int8_t bq_configure_analog_frontend(SerialDriver *sdp, uint8_t dev_num, uint8_t num_of_cells);
uint16_t bq_convert_mv_to_adc(uint16_t mv);
uint16_t bq_convert_adc_to_mv(uint16_t adc);
int8_t bq_configure_undervoltage(SerialDriver *sdp, uint8_t dev_num);
int8_t bq_configure_overvoltage(SerialDriver *sdp, uint8_t dev_num);
int8_t bq_configure_channels(SerialDriver *sdp, uint8_t dev_num);
int8_t bq_configure_active_cells(SerialDriver *sdp, uint8_t dev_num, uint8_t num_of_cells);
int8_t bq_read_voltages(SerialDriver *sdp, uint8_t dev_num);
int8_t bq_get_faults_status(SerialDriver *sdp, uint8_t dev_num);
int8_t bq_get_system_status(SerialDriver *sdp, uint8_t dev_num);
int8_t bq_clear_summary_faults_flags(SerialDriver *sdp, uint8_t dev_num);
int8_t bq_clear_faults(SerialDriver *sdp, uint8_t dev_num);
int8_t bq_configure_oversampling_rate(SerialDriver *sdp, uint8_t dev_num);
int8_t bq_configure_internal_sample_period(SerialDriver *sdp, uint8_t dev_num);
int8_t bq_configure_initial_sampling_delay(SerialDriver *sdp, uint8_t dev_num);
#endif /* INCLUDES_BQ_H_ */
