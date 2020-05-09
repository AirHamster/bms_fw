/*
 * config.h
 *
 *  Created on: May 4, 2020
 *      Author: a-h
 */

#ifndef CONFIG_H_
#define CONFIG_H_

/**
 * @brief   Magic number for jumping to bootloader.
 */

#define SYMVAL(sym) (uint32_t)(((uint8_t *)&(sym)) - ((uint8_t *)0))
//#if !defined(MAGIC_BOOTLOADER_NUMBER) || defined(__DOXYGEN__)
#define MAGIC_BOOTLOADER_NUMBER 0xDEADBEEF
//#endif

#define SHELL_SD		SD1
#define SHELL_IFACE		(BaseSequentialStream*)&SD1

#endif /* CONFIG_H_ */
