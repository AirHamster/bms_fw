/*
 * shell_cmds.h
 *
 *  Created on: May 9, 2020
 *      Author: ilia.zarubin
 */

#ifndef INCLUDES_SHELL_CMDS_H_
#define INCLUDES_SHELL_CMDS_H_
#include "ch.h"
#include "hal.h"
#include <stdint.h>
#include <shell.h>
#include <string.h>

#include "chprintf.h"

int8_t shell_init(void);
thread_t *cmd_shell_init(void);
static void cmd_battery(BaseSequentialStream* chp, int argc, char* argv[]);
static void cmd_cell(BaseSequentialStream* chp, int argc, char* argv[]);
static void cmd_chain(BaseSequentialStream* chp, int argc, char* argv[]);
static void cmd_eeprom(BaseSequentialStream* chp, int argc, char* argv[]);
static void cmd_balancing(BaseSequentialStream* chp, int argc, char* argv[]);
static void cmd_temperature(BaseSequentialStream* chp, int argc, char* argv[]);
void cmd_boot(BaseSequentialStream* chp, int argc, char* argv[]);
void cmd_reset(BaseSequentialStream* chp, int argc, char* argv[]);

#endif /* INCLUDES_SHELL_CMDS_H_ */
