/*
 * bms_logic.c
 *
 *  Created on: May 9, 2020
 *      Author: ilia.zarubin
 */
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "ch.h"
#include "hal.h"
#include "shell.h"
#include "config.h"
#include "shell_cmds.h"
#include "chprintf.h"
#include "board.h"
#include "bq.h"
#include "bms_logic.h"
#include "protocol_bq76pl455.h"

extern bq_dev_t device_chain[MAX_DEVICES_IN_CHAIN];
static cell_summary_t summary;

//
uint8_t active_devices = 16;

uint16_t bms_enable_balancing(cell_summary_t *summ_struct)
{
	int16_t i, j;

	for (i = 0; i < active_devices; i++) {
			for (j = 0; j < CELL_PER_DEVICE; j++) {
				if ((summ_struct->device_chain[i].voltages[j] != 0) & (summ_struct->device_chain[i].voltages[j] > (summ_struct->min_voltage + MAX_VOLTAGE_DELTA))) {
					bq_enable_balancing(i, j);
				}
			}
		}
	return 0;
}

uint16_t bms_disable_balansed_cells(cell_summary_t *summ_struct)
{
	int16_t i, j;
	for (i = 0; i < active_devices; i++) {
				for (j = 0; j < CELL_PER_DEVICE; j++) {
					if ((summ_struct->device_chain[i].voltages[j] != 0) & (summ_struct->device_chain[i].voltages[j] < (summ_struct->min_voltage + MAX_VOLTAGE_DELTA))) {
						bq_disable_balancing(i, j);
					}
				}
			}
	return 0;
}

uint16_t bms_find_max_voltage(cell_summary_t *summ_struct)
{
	int16_t i, j;
	uint16_t max = 0;
	uint16_t dev_index, cell_index;

	for (i = 0; i < active_devices; i++) {
		for (j = 0; j < CELL_PER_DEVICE; j++) {
			if ((summ_struct->device_chain[i].voltages[j] != 0) & (summ_struct->device_chain[i].voltages[j] > max)) {
				max = summ_struct->device_chain[i].voltages[j];
				dev_index = i;
				cell_index = j;
			}
		}
	}

	summ_struct->max_voltage = max;
	summ_struct->max_voltage_cell_number = i * CELL_PER_DEVICE + j;

	return max;
}

uint16_t bms_find_min_voltage(cell_summary_t *summ_struct)
{
	int16_t i, j;
	uint16_t min = 0;
	uint16_t dev_index, cell_index;

	for (i = 0; i < active_devices; i++) {
		for (j = 0; j < CELL_PER_DEVICE; j++) {
			if ((summ_struct->device_chain[i].voltages[j] != 0) & (summ_struct->device_chain[i].voltages[j] < min)) {
				min = summ_struct->device_chain[i].voltages[j];
				dev_index = i;
				cell_index = j;
			}
		}
	}

	summ_struct->min_voltage = min;
	summ_struct->min_voltage_cell_number = i * CELL_PER_DEVICE + j;

	return min;
}

uint16_t bms_find_delta_voltage(cell_summary_t *summ_struct)
{
	uint16_t delta;

	delta = summ_struct->max_voltage - summ_struct->min_voltage;
	summ_struct->min_max_delta_voltage = delta;

	return delta;
}

uint16_t* bms_get_voltage_array(void)
{
	//return cell_voltages;
}

int8_t bms_print_voltages(BaseSequentialStream* chp)
{

	uint16_t temp;
	chprintf(chp, "\r\nDev/cell  \t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13\t14\t15\t16");
	for (int i = 0; i < active_devices; i++) {
		chprintf(chp, "\r\nDev %d:\t", i);
		for (int j = 0; j < CELL_PER_DEVICE; j++) {
			temp = device_chain[i].voltages[j];
			chprintf(chp, "\t%.4f", temp / 1000);
		}
	}
	chprintf(chp, "\r\n");
	return 0;
}

int8_t bms_print_balance_status(BaseSequentialStream* chp)
{
	uint16_t temp;

	chprintf(chp, "\r\nDev/cell  \t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13\t14\t15\t16");
	for (int i = 0; i < active_devices; i++) {
		chprintf(chp, "\r\nDev %d:\t", i);
		for (int j = 0; j < CELL_PER_DEVICE; j++) {
			temp = device_chain[i].balance[j];
			if (temp == 0){
				chprintf(chp, "\t-");
			} else {
				chprintf(chp, "\tX");
			}

		}
	}
	chprintf(chp, "\r\n");
	return 0;
}

int8_t bms_print_summary_status(BaseSequentialStream* chp)
{
	chprintf(chp, "Battery status summary:\r\n");
	chprintf(chp, "Total voltage: %.2f\r\n", summary.total_voltage);
	chprintf(chp, "Max voltage:   %.4f\r\n", summary.max_voltage / 1000);
	chprintf(chp, "Max V cell:    %d\r\n", summary.max_voltage_cell_number);
	chprintf(chp, "Min voltage:   %.4f\r\n", summary.min_voltage / 1000);
	chprintf(chp, "Min V cell:    %d\r\n", summary.min_voltage_cell_number);
	chprintf(chp, "Delta:         %.4f\r\n", summary.min_max_delta_voltage / 1000);

	return 0;
}
