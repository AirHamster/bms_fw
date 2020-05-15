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
#include "shell.h"
#include "chprintf.h"
#include "config.h"
#include "shell_cmds.h"
#include "shellconf.h"
#include "bms_logic.h"



int8_t bq_thread_start(void);
int8_t bq_start_auto_addressing(SerialDriver *sdp);
uint16_t bq_crc_16_ibm(uint8_t *buf, uint16_t len);
uint8_t bq_check_crc(uint16_t* buf, uint16_t len, uint16_t crc);
int8_t bq_read_address(SerialDriver *sdp);
int8_t bq_read_faults(SerialDriver *sdp);
uint16_t bq_crc_16_ibm(uint8_t *buf, uint16_t len);
uint8_t bq_check_crc(uint16_t* buf, uint16_t len, uint16_t crc);
#endif /* INCLUDES_BQ_H_ */
