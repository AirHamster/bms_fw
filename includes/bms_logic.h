/*
 * bms_logic.h
 *
 *  Created on: May 10, 2020
 *      Author: ilia.zarubin
 */

#ifndef INCLUDES_BMS_LOGIC_H_
#define INCLUDES_BMS_LOGIC_H_

#include "ch.h"
#include "hal.h"
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "bq.h"

#define MAX_DEVICES_IN_CHAIN	16
#define CELL_PER_DEVICE			16
#define MAX_VOLTAGE_DELTA		50	//millivolts

typedef struct
{
	uint16_t voltages[CELL_PER_DEVICE];
	uint16_t balance[CELL_PER_DEVICE];
}bq_dev_t;

typedef struct {
	bq_dev_t device_chain[MAX_DEVICES_IN_CHAIN];
	float total_voltage;
	uint16_t min_voltage;
	uint16_t max_voltage;
	uint16_t min_max_delta_voltage;
	uint16_t min_voltage_cell_number;
	uint16_t max_voltage_cell_number;
}cell_summary_t;

uint16_t bms_find_delta_voltage(cell_summary_t *summ_struct);
uint16_t bms_find_max_voltage(cell_summary_t *summ_struct);
uint16_t bms_find_min_voltage(cell_summary_t *summ_struct);
uint16_t* bms_get_voltage_array(void);
int8_t bms_print_voltages(BaseSequentialStream* chp);
int8_t bms_print_balance_status(BaseSequentialStream* chp);
int8_t bms_print_summary_status(BaseSequentialStream* chp);

#endif /* INCLUDES_BMS_LOGIC_H_ */
