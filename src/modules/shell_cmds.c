/*
 * shell.c
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



#define SHELL_WA_SIZE   THD_WORKING_AREA_SIZE(2048)

char *complete_buffer[16];
char history_buffer[128];
thread_t *sh = NULL;

static const ShellCommand commands[] = {
		{ "battery", cmd_battery },
		{ "cell", cmd_cell },
		{ "chain", cmd_chain },
		{ "eeprom", cmd_eeprom },
		{ "balancing", cmd_balancing },
		{ "temperature", cmd_temperature },
		{ "boot", cmd_boot },
		{ "reset", cmd_reset },
		{ NULL, NULL }
};

static const ShellConfig shell_cfg1 = {
		(BaseSequentialStream*) &SHELL_SD,
		commands,
		history_buffer,
		32,
		complete_buffer
};

thread_t *cmd_shell_init(void) {
	return chThdCreateFromHeap(NULL, SHELL_WA_SIZE, "shell", NORMALPRIO + 6,
			shellThread, (void *) &shell_cfg1);
}

int8_t shell_init(void)
{
		sdStart(&SD1, NULL);
		shellInit();
		//chSemWait(&usart1_semaph);
		sh = cmd_shell_init();
		//chSemSignal(&usart1_semaph);
		//wdgReset(&WDGD1);
		if (sh != NULL) {
			return 0;
		} else {
			return -1;
		}
}

static void cmd_battery(BaseSequentialStream* chp, int argc, char* argv[])
{
		switch (argc){
		case 1:
			if (strcmp(argv[0], "status") == 0) {
				bms_print_voltages(chp);
				bq_read_address(&BQ_SD);
				//shell_print_battery_status();
			}
			break;
		default:
			//print usage
			break;
		}
}

static void cmd_cell(BaseSequentialStream* chp, int argc, char* argv[])
{
	bq_read_faults(&BQ_SD);
}

static void cmd_chain(BaseSequentialStream* chp, int argc, char* argv[])
{

}

static void cmd_eeprom(BaseSequentialStream* chp, int argc, char* argv[])
{

}

static void cmd_balancing(BaseSequentialStream* chp, int argc, char* argv[])
{

}

static void cmd_temperature(BaseSequentialStream* chp, int argc, char* argv[])
{

}
/**
 * @brief Reboot system
 * @param chp
 * @param argc
 * @param argv
 */
void cmd_reset(BaseSequentialStream* chp, int argc, char* argv[]){
	(void) argc;
	(void) argv;
	chprintf(chp, "\r\nReset system");
	chThdSleepMilliseconds(500);
	chprintf(chp, ".");
	chThdSleepMilliseconds(500);
	chprintf(chp, ".");
	chThdSleepMilliseconds(500);
	chprintf(chp, ".");
	chThdSleepMilliseconds(500);
	chprintf(chp, "\r\n");
	NVIC_SystemReset();
}

/**
 * @brief Enter bootloader
 * @param chp
 * @param argc
 * @param argv
 */
void cmd_boot(BaseSequentialStream* chp, int argc, char* argv[]) {
	(void) argc;
	(void) argv;
	chprintf(chp, "Entering bootloader after system reset");
	chThdSleepMilliseconds(500);
	chprintf(chp, ".");
	chprintf(chp, "\r\n");

	// *((unsigned long *)(SYMVAL(__ram0_end__) - 4)) = 0xDEADBEEF;

	 //*((unsigned long *) BKPSRAM_BASE) = 0xDEADBEEF;
	 RTC->BKP0R = MAGIC_BOOTLOADER_NUMBER;	// set magic flag => reset handler will jump into boot loader

	 if (RTC->BKP0R == MAGIC_BOOTLOADER_NUMBER) {
	 chprintf(chp, "Writed to the end of RAM %x, reset\r\n", RTC->BKP0R);
	 NVIC_SystemReset();
	 }else{
		 chprintf(chp, "Comparsion failed\r\n");
	 }

}
