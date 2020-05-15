/*
    ChibiOS - Copyright (C) 2006..2020 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * This file has been automatically generated using ChibiStudio board
 * generator plugin. Do not edit manually.
 */

#ifndef BOARD_H
#define BOARD_H

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/*
 * Setup for BMS Board board.
 */

/*
 * Board identifier.
 */
#define BOARD_1_0
#define BOARD_NAME                  "BMS Board"

/*
 * Board oscillators-related settings.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                32768U
#endif

#define STM32_LSE_BYPASS

#define STM32_LSEDRV                (2U << 3U)

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                12000000U
#endif

#define STM32_HSE_BYPASS

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   300U

/*
 * MCU type as defined in the ST header.
 */
#define STM32L432xx

/*
 * IO pins assignments.
 */
#define GPIOA_ADC1                  0U
#define GPIOA_ADC2                  1U
#define GPIOA_USART2_TX             2U
#define GPIOA_USART3_RX             3U
#define GPIOA_LED_GREEN             4U
#define GPIOA_LED_ORANGE            5U
#define GPIOA_LED_RED               6U
#define GPIOA_SPI1_MOSI             7U
#define GPIOA_PA8                   8U
#define GPIOA_USART1_TX             9U
#define GPIOA_USART1_RX             10U
#define GPIOA_PA11                  11U
#define GPIOA_MASTER_JUMPER         12U
#define GPIOA_SWDIO                 13U
#define GPIOA_SWCLK                 14U
#define GPIOA_12V_EN                15U

#define GPIOB_SPI1_CS2              0U
#define GPIOB_PB1                   1U
#define GPIOB_PB2                   2U
#define GPIOB_PB3                   3U
#define GPIOB_PB4                   4U
#define GPIOB_PB5                   5U
#define GPIOB_I2C1_SCL              6U
#define GPIOB_I2C1_SDA              7U
#define GPIOB_CAN_RX                8U
#define GPIOB_CAN_TX                9U
#define GPIOB_LPUSART1_RX           10U
#define GPIOB_LPUSART1_TX           11U
#define GPIOB_PB12                  12U
#define GPIOB_I2C2_SCL              13U
#define GPIOB_I2C2_SDA              14U
#define GPIOB_PB15                  15U

#define GPIOC_I2C3_SCL              0U
#define GPIOC_I2C3_SDA              1U
#define GPIOC_ADC3                  2U
#define GPIOC_ADC4                  3U
#define GPIOC_USART3_TX             4U
#define GPIOC_USART3_RX             5U
#define GPIOC_PC6                   6U
#define GPIOC_PC7                   7U
#define GPIOC_PIN8                  8U
#define GPIOC_PIN9                  9U
#define GPIOC_PIN10                 10U
#define GPIOC_PIN11                 11U
#define GPIOC_PIN12                 12U
#define GPIOC_PIN13                 13U
#define GPIOC_ARD_D7                14U
#define GPIOC_ARD_D8                15U

#define GPIOD_PIN0                  0U
#define GPIOD_PIN1                  1U
#define GPIOD_PIN2                  2U
#define GPIOD_PIN3                  3U
#define GPIOD_PIN4                  4U
#define GPIOD_PIN5                  5U
#define GPIOD_PIN6                  6U
#define GPIOD_PIN7                  7U
#define GPIOD_PIN8                  8U
#define GPIOD_PIN9                  9U
#define GPIOD_PIN10                 10U
#define GPIOD_PIN11                 11U
#define GPIOD_PIN12                 12U
#define GPIOD_PIN13                 13U
#define GPIOD_PIN14                 14U
#define GPIOD_PIN15                 15U

#define GPIOE_PIN0                  0U
#define GPIOE_PIN1                  1U
#define GPIOE_PIN2                  2U
#define GPIOE_PIN3                  3U
#define GPIOE_PIN4                  4U
#define GPIOE_PIN5                  5U
#define GPIOE_PIN6                  6U
#define GPIOE_PIN7                  7U
#define GPIOE_PIN8                  8U
#define GPIOE_PIN9                  9U
#define GPIOE_PIN10                 10U
#define GPIOE_PIN11                 11U
#define GPIOE_PIN12                 12U
#define GPIOE_PIN13                 13U
#define GPIOE_PIN14                 14U
#define GPIOE_PIN15                 15U

#define GPIOF_PIN0                  0U
#define GPIOF_PIN1                  1U
#define GPIOF_PIN2                  2U
#define GPIOF_PIN3                  3U
#define GPIOF_PIN4                  4U
#define GPIOF_PIN5                  5U
#define GPIOF_PIN6                  6U
#define GPIOF_PIN7                  7U
#define GPIOF_PIN8                  8U
#define GPIOF_PIN9                  9U
#define GPIOF_PIN10                 10U
#define GPIOF_PIN11                 11U
#define GPIOF_PIN12                 12U
#define GPIOF_PIN13                 13U
#define GPIOF_PIN14                 14U
#define GPIOF_PIN15                 15U

#define GPIOG_PIN0                  0U
#define GPIOG_PIN1                  1U
#define GPIOG_PIN2                  2U
#define GPIOG_PIN3                  3U
#define GPIOG_PIN4                  4U
#define GPIOG_PIN5                  5U
#define GPIOG_PIN6                  6U
#define GPIOG_PIN7                  7U
#define GPIOG_PIN8                  8U
#define GPIOG_PIN9                  9U
#define GPIOG_PIN10                 10U
#define GPIOG_PIN11                 11U
#define GPIOG_PIN12                 12U
#define GPIOG_PIN13                 13U
#define GPIOG_PIN14                 14U
#define GPIOG_PIN15                 15U

#define GPIOH_PIN0                  0U
#define GPIOH_PIN1                  1U
#define GPIOH_PIN2                  2U
#define GPIOH_PIN3                  3U
#define GPIOH_PIN4                  4U
#define GPIOH_PIN5                  5U
#define GPIOH_PIN6                  6U
#define GPIOH_PIN7                  7U
#define GPIOH_PIN8                  8U
#define GPIOH_PIN9                  9U
#define GPIOH_PIN10                 10U
#define GPIOH_PIN11                 11U
#define GPIOH_PIN12                 12U
#define GPIOH_PIN13                 13U
#define GPIOH_PIN14                 14U
#define GPIOH_PIN15                 15U

/*
 * IO lines assignments.
 */
#define LINE_ADC1                   PAL_LINE(GPIOA, 0U)
#define LINE_ADC2                   PAL_LINE(GPIOA, 1U)
#define LINE_USART2_TX              PAL_LINE(GPIOA, 2U)
#define LINE_USART2_RX              PAL_LINE(GPIOA, 3U)
#define LINE_LED_GREEN              PAL_LINE(GPIOA, 4U)
#define LINE_LED_ORANGE             PAL_LINE(GPIOA, 5U)
#define LINE_LED_RED                PAL_LINE(GPIOA, 6U)
#define LINE_SPI1_MOSI              PAL_LINE(GPIOA, 7U)
#define LINE_PA8                    PAL_LINE(GPIOA, 8U)
#define LINE_USART1_TX              PAL_LINE(GPIOA, 9U)
#define LINE_USART1_RX              PAL_LINE(GPIOA, 10U)
#define LINE_PA11                   PAL_LINE(GPIOA, 11U)
#define LINE_MASTER_JUMPER          PAL_LINE(GPIOA, 12U)
#define LINE_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                  PAL_LINE(GPIOA, 14U)
#define LINE_12V_EN                 PAL_LINE(GPIOA, 15U)
#define LINE_SPI1_CS2               PAL_LINE(GPIOB, 0U)
#define LINE_PB1                    PAL_LINE(GPIOB, 1U)
#define LINE_PB2                    PAL_LINE(GPIOB, 2U)
#define LINE_PB3                    PAL_LINE(GPIOB, 3U)
#define LINE_PB4                    PAL_LINE(GPIOB, 4U)
#define LINE_PB5                    PAL_LINE(GPIOB, 5U)
#define LINE_I2C1_SCL               PAL_LINE(GPIOB, 6U)
#define LINE_I2C1_SDA               PAL_LINE(GPIOB, 7U)
#define LINE_CAN_RX                 PAL_LINE(GPIOB, 8U)
#define LINE_CAN_TX                 PAL_LINE(GPIOB, 9U)
#define LINE_LPUSART1_RX            PAL_LINE(GPIOB, 10U)
#define LINE_LPUSART1_TX            PAL_LINE(GPIOB, 11U)
#define LINE_PB12                   PAL_LINE(GPIOB, 12U)
#define LINE_I2C2_SCL               PAL_LINE(GPIOB, 13U)
#define LINE_I2C2_SDA               PAL_LINE(GPIOB, 14U)
#define LINE_PB15                   PAL_LINE(GPIOB, 15U)
#define LINE_I2C3_SCL               PAL_LINE(GPIOC, 0U)
#define LINE_I2C3_SDA               PAL_LINE(GPIOC, 1U)
#define LINE_ADC3                   PAL_LINE(GPIOC, 2U)
#define LINE_ADC4                   PAL_LINE(GPIOC, 3U)
#define LINE_USART3_TX              PAL_LINE(GPIOC, 4U)
#define LINE_USART3_RX              PAL_LINE(GPIOC, 5U)
#define LINE_PC6                    PAL_LINE(GPIOC, 6U)
#define LINE_PC7                    PAL_LINE(GPIOC, 7U)
#define LINE_ARD_D7                 PAL_LINE(GPIOC, 14U)
#define LINE_ARD_D8                 PAL_LINE(GPIOC, 15U)

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))
#define PIN_ASCR_DISABLED(n)        (0U << (n))
#define PIN_ASCR_ENABLED(n)         (1U << (n))
#define PIN_LOCKR_DISABLED(n)       (0U << (n))
#define PIN_LOCKR_ENABLED(n)        (1U << (n))

/*
 * GPIOA setup:
 *
 * PA0  - ADC1                      (analog).
 * PA1  - ADC2                      (analog).
 * PA2  - USART2_TX                 (alternate 7).
 * PA3  - USART3_RX                 (alternate 7).
 * PA4  - LED_GREEN                 (output pushpull maximum).
 * PA5  - LED_ORANGE                (output pushpull maximum).
 * PA6  - LED_RED                   (output pushpull maximum).
 * PA7  - SPI1_MOSI                 (alternate 5).
 * PA8  - PA8                       (analog).
 * PA9  - USART1_TX                 (alternate 7).
 * PA10 - USART1_RX                 (alternate 7).
 * PA11 - PA11                      (analog).
 * PA12 - MASTER_JUMPER             (input floating).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 * PA15 - 12V_EN                    (output pushpull maximum).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_ANALOG(GPIOA_ADC1) |          \
                                     PIN_MODE_ANALOG(GPIOA_ADC2) |          \
                                     PIN_MODE_ALTERNATE(GPIOA_USART2_TX) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_USART3_RX) |  \
                                     PIN_MODE_OUTPUT(GPIOA_LED_GREEN) |     \
                                     PIN_MODE_OUTPUT(GPIOA_LED_ORANGE) |    \
                                     PIN_MODE_OUTPUT(GPIOA_LED_RED) |       \
                                     PIN_MODE_ALTERNATE(GPIOA_SPI1_MOSI) |  \
                                     PIN_MODE_ANALOG(GPIOA_PA8) |           \
                                     PIN_MODE_ALTERNATE(GPIOA_USART1_TX) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_USART1_RX) |  \
                                     PIN_MODE_ANALOG(GPIOA_PA11) |          \
                                     PIN_MODE_INPUT(GPIOA_MASTER_JUMPER) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     PIN_MODE_OUTPUT(GPIOA_12V_EN))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_ADC1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_ADC2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART2_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART3_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LED_GREEN) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LED_ORANGE) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LED_RED) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SPI1_MOSI) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA8) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART1_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART1_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA11) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_MASTER_JUMPER) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_12V_EN))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_HIGH(GPIOA_ADC1) |          \
                                     PIN_OSPEED_HIGH(GPIOA_ADC2) |          \
                                     PIN_OSPEED_MEDIUM(GPIOA_USART2_TX) |   \
                                     PIN_OSPEED_MEDIUM(GPIOA_USART3_RX) |   \
                                     PIN_OSPEED_HIGH(GPIOA_LED_GREEN) |     \
                                     PIN_OSPEED_HIGH(GPIOA_LED_ORANGE) |    \
                                     PIN_OSPEED_HIGH(GPIOA_LED_RED) |       \
                                     PIN_OSPEED_HIGH(GPIOA_SPI1_MOSI) |     \
                                     PIN_OSPEED_HIGH(GPIOA_PA8) |           \
                                     PIN_OSPEED_HIGH(GPIOA_USART1_TX) |     \
                                     PIN_OSPEED_HIGH(GPIOA_USART1_RX) |     \
                                     PIN_OSPEED_HIGH(GPIOA_PA11) |          \
                                     PIN_OSPEED_HIGH(GPIOA_MASTER_JUMPER) | \
                                     PIN_OSPEED_HIGH(GPIOA_SWDIO) |         \
                                     PIN_OSPEED_HIGH(GPIOA_SWCLK) |         \
                                     PIN_OSPEED_HIGH(GPIOA_12V_EN))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(GPIOA_ADC1) |       \
                                     PIN_PUPDR_FLOATING(GPIOA_ADC2) |       \
                                     PIN_PUPDR_FLOATING(GPIOA_USART2_TX) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_USART3_RX) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_LED_GREEN) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_LED_ORANGE) | \
                                     PIN_PUPDR_FLOATING(GPIOA_LED_RED) |    \
                                     PIN_PUPDR_FLOATING(GPIOA_SPI1_MOSI) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_PA8) |        \
                                     PIN_PUPDR_FLOATING(GPIOA_USART1_TX) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_USART1_RX) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_PA11) |       \
                                     PIN_PUPDR_FLOATING(GPIOA_MASTER_JUMPER) |\
                                     PIN_PUPDR_PULLUP(GPIOA_SWDIO) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOA_SWCLK) |      \
                                     PIN_PUPDR_PULLUP(GPIOA_12V_EN))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_ADC1) |             \
                                     PIN_ODR_HIGH(GPIOA_ADC2) |             \
                                     PIN_ODR_HIGH(GPIOA_USART2_TX) |        \
                                     PIN_ODR_HIGH(GPIOA_USART3_RX) |        \
                                     PIN_ODR_HIGH(GPIOA_LED_GREEN) |        \
                                     PIN_ODR_HIGH(GPIOA_LED_ORANGE) |       \
                                     PIN_ODR_HIGH(GPIOA_LED_RED) |          \
                                     PIN_ODR_HIGH(GPIOA_SPI1_MOSI) |        \
                                     PIN_ODR_HIGH(GPIOA_PA8) |              \
                                     PIN_ODR_HIGH(GPIOA_USART1_TX) |        \
                                     PIN_ODR_HIGH(GPIOA_USART1_RX) |        \
                                     PIN_ODR_HIGH(GPIOA_PA11) |             \
                                     PIN_ODR_HIGH(GPIOA_MASTER_JUMPER) |    \
                                     PIN_ODR_HIGH(GPIOA_SWDIO) |            \
                                     PIN_ODR_HIGH(GPIOA_SWCLK) |            \
                                     PIN_ODR_HIGH(GPIOA_12V_EN))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_ADC1, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_ADC2, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_USART2_TX, 7U) |     \
                                     PIN_AFIO_AF(GPIOA_USART3_RX, 7U) |     \
                                     PIN_AFIO_AF(GPIOA_LED_GREEN, 0U) |     \
                                     PIN_AFIO_AF(GPIOA_LED_ORANGE, 0U) |    \
                                     PIN_AFIO_AF(GPIOA_LED_RED, 0U) |       \
                                     PIN_AFIO_AF(GPIOA_SPI1_MOSI, 5U))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_PA8, 0U) |           \
                                     PIN_AFIO_AF(GPIOA_USART1_TX, 7U) |     \
                                     PIN_AFIO_AF(GPIOA_USART1_RX, 7U) |     \
                                     PIN_AFIO_AF(GPIOA_PA11, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_MASTER_JUMPER, 0U) | \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_12V_EN, 0U))
#define VAL_GPIOA_ASCR              (PIN_ASCR_DISABLED(GPIOA_ADC1) |        \
                                     PIN_ASCR_DISABLED(GPIOA_ADC2) |        \
                                     PIN_ASCR_DISABLED(GPIOA_USART2_TX) |   \
                                     PIN_ASCR_DISABLED(GPIOA_USART3_RX) |   \
                                     PIN_ASCR_DISABLED(GPIOA_LED_GREEN) |   \
                                     PIN_ASCR_DISABLED(GPIOA_LED_ORANGE) |  \
                                     PIN_ASCR_DISABLED(GPIOA_LED_RED) |     \
                                     PIN_ASCR_DISABLED(GPIOA_SPI1_MOSI) |   \
                                     PIN_ASCR_DISABLED(GPIOA_PA8) |         \
                                     PIN_ASCR_DISABLED(GPIOA_USART1_TX) |   \
                                     PIN_ASCR_DISABLED(GPIOA_USART1_RX) |   \
                                     PIN_ASCR_DISABLED(GPIOA_PA11) |        \
                                     PIN_ASCR_DISABLED(GPIOA_MASTER_JUMPER) |\
                                     PIN_ASCR_DISABLED(GPIOA_SWDIO) |       \
                                     PIN_ASCR_DISABLED(GPIOA_SWCLK) |       \
                                     PIN_ASCR_DISABLED(GPIOA_12V_EN))
#define VAL_GPIOA_LOCKR             (PIN_LOCKR_DISABLED(GPIOA_ADC1) |       \
                                     PIN_LOCKR_DISABLED(GPIOA_ADC2) |       \
                                     PIN_LOCKR_DISABLED(GPIOA_USART2_TX) |  \
                                     PIN_LOCKR_DISABLED(GPIOA_USART3_RX) |  \
                                     PIN_LOCKR_DISABLED(GPIOA_LED_GREEN) |  \
                                     PIN_LOCKR_DISABLED(GPIOA_LED_ORANGE) | \
                                     PIN_LOCKR_DISABLED(GPIOA_LED_RED) |    \
                                     PIN_LOCKR_DISABLED(GPIOA_SPI1_MOSI) |  \
                                     PIN_LOCKR_DISABLED(GPIOA_PA8) |        \
                                     PIN_LOCKR_DISABLED(GPIOA_USART1_TX) |  \
                                     PIN_LOCKR_DISABLED(GPIOA_USART1_RX) |  \
                                     PIN_LOCKR_DISABLED(GPIOA_PA11) |       \
                                     PIN_LOCKR_DISABLED(GPIOA_MASTER_JUMPER) |\
                                     PIN_LOCKR_DISABLED(GPIOA_SWDIO) |      \
                                     PIN_LOCKR_DISABLED(GPIOA_SWCLK) |      \
                                     PIN_LOCKR_DISABLED(GPIOA_12V_EN))

/*
 * GPIOB setup:
 *
 * PB0  - SPI1_CS2                  (output pushpull maximum).
 * PB1  - PB1                       (analog).
 * PB2  - PB2                       (analog).
 * PB3  - PB3                       (analog).
 * PB4  - PB4                       (analog).
 * PB5  - PB5                       (analog).
 * PB6  - I2C1_SCL                  (alternate 4).
 * PB7  - I2C1_SDA                  (alternate 4).
 * PB8  - CAN_RX                    (alternate 9).
 * PB9  - CAN_TX                    (alternate 9).
 * PB10 - LPUSART1_RX               (alternate 8).
 * PB11 - LPUSART1_TX               (alternate 8).
 * PB12 - PB12                      (analog).
 * PB13 - I2C2_SCL                  (alternate 13).
 * PB14 - I2C2_SDA                  (alternate 0).
 * PB15 - PB15                      (analog).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_OUTPUT(GPIOB_SPI1_CS2) |      \
                                     PIN_MODE_ANALOG(GPIOB_PB1) |           \
                                     PIN_MODE_ANALOG(GPIOB_PB2) |           \
                                     PIN_MODE_ANALOG(GPIOB_PB3) |           \
                                     PIN_MODE_ANALOG(GPIOB_PB4) |           \
                                     PIN_MODE_ANALOG(GPIOB_PB5) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_I2C1_SCL) |   \
                                     PIN_MODE_ALTERNATE(GPIOB_I2C1_SDA) |   \
                                     PIN_MODE_ALTERNATE(GPIOB_CAN_RX) |     \
                                     PIN_MODE_ALTERNATE(GPIOB_CAN_TX) |     \
                                     PIN_MODE_ALTERNATE(GPIOB_LPUSART1_RX) |\
                                     PIN_MODE_ALTERNATE(GPIOB_LPUSART1_TX) |\
                                     PIN_MODE_ANALOG(GPIOB_PB12) |          \
                                     PIN_MODE_ALTERNATE(GPIOB_I2C2_SCL) |   \
                                     PIN_MODE_ALTERNATE(GPIOB_I2C2_SDA) |   \
                                     PIN_MODE_ANALOG(GPIOB_PB15))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_SPI1_CS2) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB1) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB2) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB3) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB4) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB5) |        \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C1_SCL) |  \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C1_SDA) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_CAN_RX) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_CAN_TX) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_LPUSART1_RX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_LPUSART1_TX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB12) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C2_SCL) |  \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C2_SDA) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB15))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_HIGH(GPIOB_SPI1_CS2) |      \
                                     PIN_OSPEED_HIGH(GPIOB_PB1) |           \
                                     PIN_OSPEED_HIGH(GPIOB_PB2) |           \
                                     PIN_OSPEED_HIGH(GPIOB_PB3) |           \
                                     PIN_OSPEED_HIGH(GPIOB_PB4) |           \
                                     PIN_OSPEED_HIGH(GPIOB_PB5) |           \
                                     PIN_OSPEED_HIGH(GPIOB_I2C1_SCL) |      \
                                     PIN_OSPEED_HIGH(GPIOB_I2C1_SDA) |      \
                                     PIN_OSPEED_HIGH(GPIOB_CAN_RX) |        \
                                     PIN_OSPEED_HIGH(GPIOB_CAN_TX) |        \
                                     PIN_OSPEED_HIGH(GPIOB_LPUSART1_RX) |   \
                                     PIN_OSPEED_HIGH(GPIOB_LPUSART1_TX) |   \
                                     PIN_OSPEED_HIGH(GPIOB_PB12) |          \
                                     PIN_OSPEED_HIGH(GPIOB_I2C2_SCL) |      \
                                     PIN_OSPEED_HIGH(GPIOB_I2C2_SDA) |      \
                                     PIN_OSPEED_HIGH(GPIOB_PB15))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_PULLUP(GPIOB_SPI1_CS2) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_PB1) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_PB2) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_PB3) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_PB4) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_PB5) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_I2C1_SCL) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_I2C1_SDA) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_CAN_RX) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_CAN_TX) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_LPUSART1_RX) |\
                                     PIN_PUPDR_FLOATING(GPIOB_LPUSART1_TX) |\
                                     PIN_PUPDR_FLOATING(GPIOB_PB12) |       \
                                     PIN_PUPDR_FLOATING(GPIOB_I2C2_SCL) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_I2C2_SDA) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_PB15))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_SPI1_CS2) |         \
                                     PIN_ODR_HIGH(GPIOB_PB1) |              \
                                     PIN_ODR_HIGH(GPIOB_PB2) |              \
                                     PIN_ODR_LOW(GPIOB_PB3) |               \
                                     PIN_ODR_HIGH(GPIOB_PB4) |              \
                                     PIN_ODR_HIGH(GPIOB_PB5) |              \
                                     PIN_ODR_HIGH(GPIOB_I2C1_SCL) |         \
                                     PIN_ODR_HIGH(GPIOB_I2C1_SDA) |         \
                                     PIN_ODR_HIGH(GPIOB_CAN_RX) |           \
                                     PIN_ODR_HIGH(GPIOB_CAN_TX) |           \
                                     PIN_ODR_HIGH(GPIOB_LPUSART1_RX) |      \
                                     PIN_ODR_HIGH(GPIOB_LPUSART1_TX) |      \
                                     PIN_ODR_HIGH(GPIOB_PB12) |             \
                                     PIN_ODR_HIGH(GPIOB_I2C2_SCL) |         \
                                     PIN_ODR_HIGH(GPIOB_I2C2_SDA) |         \
                                     PIN_ODR_HIGH(GPIOB_PB15))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_SPI1_CS2, 0U) |      \
                                     PIN_AFIO_AF(GPIOB_PB1, 0U) |           \
                                     PIN_AFIO_AF(GPIOB_PB2, 0U) |           \
                                     PIN_AFIO_AF(GPIOB_PB3, 0U) |           \
                                     PIN_AFIO_AF(GPIOB_PB4, 0U) |           \
                                     PIN_AFIO_AF(GPIOB_PB5, 0U) |           \
                                     PIN_AFIO_AF(GPIOB_I2C1_SCL, 4U) |      \
                                     PIN_AFIO_AF(GPIOB_I2C1_SDA, 4U))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_CAN_RX, 9U) |        \
                                     PIN_AFIO_AF(GPIOB_CAN_TX, 9U) |        \
                                     PIN_AFIO_AF(GPIOB_LPUSART1_RX, 8U) |   \
                                     PIN_AFIO_AF(GPIOB_LPUSART1_TX, 8U) |   \
                                     PIN_AFIO_AF(GPIOB_PB12, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_I2C2_SCL, 13U) |     \
                                     PIN_AFIO_AF(GPIOB_I2C2_SDA, 0U) |      \
                                     PIN_AFIO_AF(GPIOB_PB15, 0U))
#define VAL_GPIOB_ASCR              (PIN_ASCR_DISABLED(GPIOB_SPI1_CS2) |    \
                                     PIN_ASCR_DISABLED(GPIOB_PB1) |         \
                                     PIN_ASCR_DISABLED(GPIOB_PB2) |         \
                                     PIN_ASCR_DISABLED(GPIOB_PB3) |         \
                                     PIN_ASCR_DISABLED(GPIOB_PB4) |         \
                                     PIN_ASCR_DISABLED(GPIOB_PB5) |         \
                                     PIN_ASCR_DISABLED(GPIOB_I2C1_SCL) |    \
                                     PIN_ASCR_DISABLED(GPIOB_I2C1_SDA) |    \
                                     PIN_ASCR_DISABLED(GPIOB_CAN_RX) |      \
                                     PIN_ASCR_DISABLED(GPIOB_CAN_TX) |      \
                                     PIN_ASCR_DISABLED(GPIOB_LPUSART1_RX) | \
                                     PIN_ASCR_DISABLED(GPIOB_LPUSART1_TX) | \
                                     PIN_ASCR_DISABLED(GPIOB_PB12) |        \
                                     PIN_ASCR_DISABLED(GPIOB_I2C2_SCL) |    \
                                     PIN_ASCR_DISABLED(GPIOB_I2C2_SDA) |    \
                                     PIN_ASCR_DISABLED(GPIOB_PB15))
#define VAL_GPIOB_LOCKR             (PIN_LOCKR_DISABLED(GPIOB_SPI1_CS2) |   \
                                     PIN_LOCKR_DISABLED(GPIOB_PB1) |        \
                                     PIN_LOCKR_DISABLED(GPIOB_PB2) |        \
                                     PIN_LOCKR_DISABLED(GPIOB_PB3) |        \
                                     PIN_LOCKR_DISABLED(GPIOB_PB4) |        \
                                     PIN_LOCKR_DISABLED(GPIOB_PB5) |        \
                                     PIN_LOCKR_DISABLED(GPIOB_I2C1_SCL) |   \
                                     PIN_LOCKR_DISABLED(GPIOB_I2C1_SDA) |   \
                                     PIN_LOCKR_DISABLED(GPIOB_CAN_RX) |     \
                                     PIN_LOCKR_DISABLED(GPIOB_CAN_TX) |     \
                                     PIN_LOCKR_DISABLED(GPIOB_LPUSART1_RX) |\
                                     PIN_LOCKR_DISABLED(GPIOB_LPUSART1_TX) |\
                                     PIN_LOCKR_DISABLED(GPIOB_PB12) |       \
                                     PIN_LOCKR_DISABLED(GPIOB_I2C2_SCL) |   \
                                     PIN_LOCKR_DISABLED(GPIOB_I2C2_SDA) |   \
                                     PIN_LOCKR_DISABLED(GPIOB_PB15))

/*
 * GPIOC setup:
 *
 * PC0  - I2C3_SCL                  (alternate 4).
 * PC1  - I2C3_SDA                  (alternate 4).
 * PC2  - ADC3                      (analog).
 * PC3  - ADC4                      (analog).
 * PC4  - USART3_TX                 (alternate 7).
 * PC5  - USART3_RX                 (alternate 7).
 * PC6  - PC6                       (analog).
 * PC7  - PC7                       (analog).
 * PC8  - PIN8                      (analog).
 * PC9  - PIN9                      (analog).
 * PC10 - PIN10                     (analog).
 * PC11 - PIN11                     (analog).
 * PC12 - PIN12                     (analog).
 * PC13 - PIN13                     (analog).
 * PC14 - ARD_D7                    (analog).
 * PC15 - ARD_D8                    (analog).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_ALTERNATE(GPIOC_I2C3_SCL) |   \
                                     PIN_MODE_ALTERNATE(GPIOC_I2C3_SDA) |   \
                                     PIN_MODE_ANALOG(GPIOC_ADC3) |          \
                                     PIN_MODE_ANALOG(GPIOC_ADC4) |          \
                                     PIN_MODE_ALTERNATE(GPIOC_USART3_TX) |  \
                                     PIN_MODE_ALTERNATE(GPIOC_USART3_RX) |  \
                                     PIN_MODE_ANALOG(GPIOC_PC6) |           \
                                     PIN_MODE_ANALOG(GPIOC_PC7) |           \
                                     PIN_MODE_ANALOG(GPIOC_PIN8) |          \
                                     PIN_MODE_ANALOG(GPIOC_PIN9) |          \
                                     PIN_MODE_ANALOG(GPIOC_PIN10) |         \
                                     PIN_MODE_ANALOG(GPIOC_PIN11) |         \
                                     PIN_MODE_ANALOG(GPIOC_PIN12) |         \
                                     PIN_MODE_ANALOG(GPIOC_PIN13) |         \
                                     PIN_MODE_ANALOG(GPIOC_ARD_D7) |        \
                                     PIN_MODE_ANALOG(GPIOC_ARD_D8))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_OPENDRAIN(GPIOC_I2C3_SCL) |  \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_I2C3_SDA) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ADC3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ADC4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_USART3_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_USART3_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC6) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC7) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ARD_D7) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ARD_D8))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_HIGH(GPIOC_I2C3_SCL) |      \
                                     PIN_OSPEED_HIGH(GPIOC_I2C3_SDA) |      \
                                     PIN_OSPEED_HIGH(GPIOC_ADC3) |          \
                                     PIN_OSPEED_HIGH(GPIOC_ADC4) |          \
                                     PIN_OSPEED_HIGH(GPIOC_USART3_TX) |     \
                                     PIN_OSPEED_HIGH(GPIOC_USART3_RX) |     \
                                     PIN_OSPEED_HIGH(GPIOC_PC6) |           \
                                     PIN_OSPEED_HIGH(GPIOC_PC7) |           \
                                     PIN_OSPEED_HIGH(GPIOC_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOC_ARD_D7) |        \
                                     PIN_OSPEED_HIGH(GPIOC_ARD_D8))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(GPIOC_I2C3_SCL) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_I2C3_SDA) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_ADC3) |       \
                                     PIN_PUPDR_FLOATING(GPIOC_ADC4) |       \
                                     PIN_PUPDR_FLOATING(GPIOC_USART3_TX) |  \
                                     PIN_PUPDR_FLOATING(GPIOC_USART3_RX) |  \
                                     PIN_PUPDR_FLOATING(GPIOC_PC6) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_PC7) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_ARD_D7) |     \
                                     PIN_PUPDR_FLOATING(GPIOC_ARD_D8))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_I2C3_SCL) |         \
                                     PIN_ODR_HIGH(GPIOC_I2C3_SDA) |         \
                                     PIN_ODR_HIGH(GPIOC_ADC3) |             \
                                     PIN_ODR_HIGH(GPIOC_ADC4) |             \
                                     PIN_ODR_HIGH(GPIOC_USART3_TX) |        \
                                     PIN_ODR_HIGH(GPIOC_USART3_RX) |        \
                                     PIN_ODR_HIGH(GPIOC_PC6) |              \
                                     PIN_ODR_HIGH(GPIOC_PC7) |              \
                                     PIN_ODR_HIGH(GPIOC_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOC_ARD_D7) |           \
                                     PIN_ODR_HIGH(GPIOC_ARD_D8))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_I2C3_SCL, 4U) |      \
                                     PIN_AFIO_AF(GPIOC_I2C3_SDA, 4U) |      \
                                     PIN_AFIO_AF(GPIOC_ADC3, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_ADC4, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_USART3_TX, 7U) |     \
                                     PIN_AFIO_AF(GPIOC_USART3_RX, 7U) |     \
                                     PIN_AFIO_AF(GPIOC_PC6, 0U) |           \
                                     PIN_AFIO_AF(GPIOC_PC7, 0U))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_ARD_D7, 0U) |        \
                                     PIN_AFIO_AF(GPIOC_ARD_D8, 0U))
#define VAL_GPIOC_ASCR              (PIN_ASCR_DISABLED(GPIOC_I2C3_SCL) |    \
                                     PIN_ASCR_DISABLED(GPIOC_I2C3_SDA) |    \
                                     PIN_ASCR_DISABLED(GPIOC_ADC3) |        \
                                     PIN_ASCR_DISABLED(GPIOC_ADC4) |        \
                                     PIN_ASCR_DISABLED(GPIOC_USART3_TX) |   \
                                     PIN_ASCR_DISABLED(GPIOC_USART3_RX) |   \
                                     PIN_ASCR_DISABLED(GPIOC_PC6) |         \
                                     PIN_ASCR_DISABLED(GPIOC_PC7) |         \
                                     PIN_ASCR_DISABLED(GPIOC_PIN8) |        \
                                     PIN_ASCR_DISABLED(GPIOC_PIN9) |        \
                                     PIN_ASCR_DISABLED(GPIOC_PIN10) |       \
                                     PIN_ASCR_DISABLED(GPIOC_PIN11) |       \
                                     PIN_ASCR_DISABLED(GPIOC_PIN12) |       \
                                     PIN_ASCR_DISABLED(GPIOC_PIN13) |       \
                                     PIN_ASCR_DISABLED(GPIOC_ARD_D7) |      \
                                     PIN_ASCR_DISABLED(GPIOC_ARD_D8))
#define VAL_GPIOC_LOCKR             (PIN_LOCKR_DISABLED(GPIOC_I2C3_SCL) |   \
                                     PIN_LOCKR_DISABLED(GPIOC_I2C3_SDA) |   \
                                     PIN_LOCKR_DISABLED(GPIOC_ADC3) |       \
                                     PIN_LOCKR_DISABLED(GPIOC_ADC4) |       \
                                     PIN_LOCKR_DISABLED(GPIOC_USART3_TX) |  \
                                     PIN_LOCKR_DISABLED(GPIOC_USART3_RX) |  \
                                     PIN_LOCKR_DISABLED(GPIOC_PC6) |        \
                                     PIN_LOCKR_DISABLED(GPIOC_PC7) |        \
                                     PIN_LOCKR_DISABLED(GPIOC_PIN8) |       \
                                     PIN_LOCKR_DISABLED(GPIOC_PIN9) |       \
                                     PIN_LOCKR_DISABLED(GPIOC_PIN10) |      \
                                     PIN_LOCKR_DISABLED(GPIOC_PIN11) |      \
                                     PIN_LOCKR_DISABLED(GPIOC_PIN12) |      \
                                     PIN_LOCKR_DISABLED(GPIOC_PIN13) |      \
                                     PIN_LOCKR_DISABLED(GPIOC_ARD_D7) |     \
                                     PIN_LOCKR_DISABLED(GPIOC_ARD_D8))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (analog).
 * PD1  - PIN1                      (analog).
 * PD2  - PIN2                      (analog).
 * PD3  - PIN3                      (analog).
 * PD4  - PIN4                      (analog).
 * PD5  - PIN5                      (analog).
 * PD6  - PIN6                      (analog).
 * PD7  - PIN7                      (analog).
 * PD8  - PIN8                      (analog).
 * PD9  - PIN9                      (analog).
 * PD10 - PIN10                     (analog).
 * PD11 - PIN11                     (analog).
 * PD12 - PIN12                     (analog).
 * PD13 - PIN13                     (analog).
 * PD14 - PIN14                     (analog).
 * PD15 - PIN15                     (analog).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_ANALOG(GPIOD_PIN0) |          \
                                     PIN_MODE_ANALOG(GPIOD_PIN1) |          \
                                     PIN_MODE_ANALOG(GPIOD_PIN2) |          \
                                     PIN_MODE_ANALOG(GPIOD_PIN3) |          \
                                     PIN_MODE_ANALOG(GPIOD_PIN4) |          \
                                     PIN_MODE_ANALOG(GPIOD_PIN5) |          \
                                     PIN_MODE_ANALOG(GPIOD_PIN6) |          \
                                     PIN_MODE_ANALOG(GPIOD_PIN7) |          \
                                     PIN_MODE_ANALOG(GPIOD_PIN8) |          \
                                     PIN_MODE_ANALOG(GPIOD_PIN9) |          \
                                     PIN_MODE_ANALOG(GPIOD_PIN10) |         \
                                     PIN_MODE_ANALOG(GPIOD_PIN11) |         \
                                     PIN_MODE_ANALOG(GPIOD_PIN12) |         \
                                     PIN_MODE_ANALOG(GPIOD_PIN13) |         \
                                     PIN_MODE_ANALOG(GPIOD_PIN14) |         \
                                     PIN_MODE_ANALOG(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_HIGH(GPIOD_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_FLOATING(GPIOD_PIN0) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN1) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN5) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN15))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0U))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN15, 0U))
#define VAL_GPIOD_ASCR              (PIN_ASCR_DISABLED(GPIOD_PIN0) |        \
                                     PIN_ASCR_DISABLED(GPIOD_PIN1) |        \
                                     PIN_ASCR_DISABLED(GPIOD_PIN2) |        \
                                     PIN_ASCR_DISABLED(GPIOD_PIN3) |        \
                                     PIN_ASCR_DISABLED(GPIOD_PIN4) |        \
                                     PIN_ASCR_DISABLED(GPIOD_PIN5) |        \
                                     PIN_ASCR_DISABLED(GPIOD_PIN6) |        \
                                     PIN_ASCR_DISABLED(GPIOD_PIN7) |        \
                                     PIN_ASCR_DISABLED(GPIOD_PIN8) |        \
                                     PIN_ASCR_DISABLED(GPIOD_PIN9) |        \
                                     PIN_ASCR_DISABLED(GPIOD_PIN10) |       \
                                     PIN_ASCR_DISABLED(GPIOD_PIN11) |       \
                                     PIN_ASCR_DISABLED(GPIOD_PIN12) |       \
                                     PIN_ASCR_DISABLED(GPIOD_PIN13) |       \
                                     PIN_ASCR_DISABLED(GPIOD_PIN14) |       \
                                     PIN_ASCR_DISABLED(GPIOD_PIN15))
#define VAL_GPIOD_LOCKR             (PIN_LOCKR_DISABLED(GPIOD_PIN0) |       \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN1) |       \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN2) |       \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN3) |       \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN4) |       \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN5) |       \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN6) |       \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN7) |       \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN8) |       \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN9) |       \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN10) |      \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN11) |      \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN12) |      \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN13) |      \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN14) |      \
                                     PIN_LOCKR_DISABLED(GPIOD_PIN15))

/*
 * GPIOE setup:
 *
 * PE0  - PIN0                      (analog).
 * PE1  - PIN1                      (analog).
 * PE2  - PIN2                      (analog).
 * PE3  - PIN3                      (analog).
 * PE4  - PIN4                      (analog).
 * PE5  - PIN5                      (analog).
 * PE6  - PIN6                      (analog).
 * PE7  - PIN7                      (analog).
 * PE8  - PIN8                      (analog).
 * PE9  - PIN9                      (analog).
 * PE10 - PIN10                     (analog).
 * PE11 - PIN11                     (analog).
 * PE12 - PIN12                     (analog).
 * PE13 - PIN13                     (analog).
 * PE14 - PIN14                     (analog).
 * PE15 - PIN15                     (analog).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_ANALOG(GPIOE_PIN0) |          \
                                     PIN_MODE_ANALOG(GPIOE_PIN1) |          \
                                     PIN_MODE_ANALOG(GPIOE_PIN2) |          \
                                     PIN_MODE_ANALOG(GPIOE_PIN3) |          \
                                     PIN_MODE_ANALOG(GPIOE_PIN4) |          \
                                     PIN_MODE_ANALOG(GPIOE_PIN5) |          \
                                     PIN_MODE_ANALOG(GPIOE_PIN6) |          \
                                     PIN_MODE_ANALOG(GPIOE_PIN7) |          \
                                     PIN_MODE_ANALOG(GPIOE_PIN8) |          \
                                     PIN_MODE_ANALOG(GPIOE_PIN9) |          \
                                     PIN_MODE_ANALOG(GPIOE_PIN10) |         \
                                     PIN_MODE_ANALOG(GPIOE_PIN11) |         \
                                     PIN_MODE_ANALOG(GPIOE_PIN12) |         \
                                     PIN_MODE_ANALOG(GPIOE_PIN13) |         \
                                     PIN_MODE_ANALOG(GPIOE_PIN14) |         \
                                     PIN_MODE_ANALOG(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_HIGH(GPIOE_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_FLOATING(GPIOE_PIN0) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN1) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN5) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN7, 0U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN15, 0U))
#define VAL_GPIOE_ASCR              (PIN_ASCR_DISABLED(GPIOE_PIN0) |        \
                                     PIN_ASCR_DISABLED(GPIOE_PIN1) |        \
                                     PIN_ASCR_DISABLED(GPIOE_PIN2) |        \
                                     PIN_ASCR_DISABLED(GPIOE_PIN3) |        \
                                     PIN_ASCR_DISABLED(GPIOE_PIN4) |        \
                                     PIN_ASCR_DISABLED(GPIOE_PIN5) |        \
                                     PIN_ASCR_DISABLED(GPIOE_PIN6) |        \
                                     PIN_ASCR_DISABLED(GPIOE_PIN7) |        \
                                     PIN_ASCR_DISABLED(GPIOE_PIN8) |        \
                                     PIN_ASCR_DISABLED(GPIOE_PIN9) |        \
                                     PIN_ASCR_DISABLED(GPIOE_PIN10) |       \
                                     PIN_ASCR_DISABLED(GPIOE_PIN11) |       \
                                     PIN_ASCR_DISABLED(GPIOE_PIN12) |       \
                                     PIN_ASCR_DISABLED(GPIOE_PIN13) |       \
                                     PIN_ASCR_DISABLED(GPIOE_PIN14) |       \
                                     PIN_ASCR_DISABLED(GPIOE_PIN15))
#define VAL_GPIOE_LOCKR             (PIN_LOCKR_DISABLED(GPIOE_PIN0) |       \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN1) |       \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN2) |       \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN3) |       \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN4) |       \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN5) |       \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN6) |       \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN7) |       \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN8) |       \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN9) |       \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN10) |      \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN11) |      \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN12) |      \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN13) |      \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN14) |      \
                                     PIN_LOCKR_DISABLED(GPIOE_PIN15))

/*
 * GPIOF setup:
 *
 * PF0  - PIN0                      (analog).
 * PF1  - PIN1                      (analog).
 * PF2  - PIN2                      (analog).
 * PF3  - PIN3                      (analog).
 * PF4  - PIN4                      (analog).
 * PF5  - PIN5                      (analog).
 * PF6  - PIN6                      (analog).
 * PF7  - PIN7                      (analog).
 * PF8  - PIN8                      (analog).
 * PF9  - PIN9                      (analog).
 * PF10 - PIN10                     (analog).
 * PF11 - PIN11                     (analog).
 * PF12 - PIN12                     (analog).
 * PF13 - PIN13                     (analog).
 * PF14 - PIN14                     (analog).
 * PF15 - PIN15                     (analog).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_ANALOG(GPIOF_PIN0) |          \
                                     PIN_MODE_ANALOG(GPIOF_PIN1) |          \
                                     PIN_MODE_ANALOG(GPIOF_PIN2) |          \
                                     PIN_MODE_ANALOG(GPIOF_PIN3) |          \
                                     PIN_MODE_ANALOG(GPIOF_PIN4) |          \
                                     PIN_MODE_ANALOG(GPIOF_PIN5) |          \
                                     PIN_MODE_ANALOG(GPIOF_PIN6) |          \
                                     PIN_MODE_ANALOG(GPIOF_PIN7) |          \
                                     PIN_MODE_ANALOG(GPIOF_PIN8) |          \
                                     PIN_MODE_ANALOG(GPIOF_PIN9) |          \
                                     PIN_MODE_ANALOG(GPIOF_PIN10) |         \
                                     PIN_MODE_ANALOG(GPIOF_PIN11) |         \
                                     PIN_MODE_ANALOG(GPIOF_PIN12) |         \
                                     PIN_MODE_ANALOG(GPIOF_PIN13) |         \
                                     PIN_MODE_ANALOG(GPIOF_PIN14) |         \
                                     PIN_MODE_ANALOG(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_HIGH(GPIOF_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_PIN0) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN1) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN5) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN7, 0U))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0U))
#define VAL_GPIOF_ASCR              (PIN_ASCR_DISABLED(GPIOF_PIN0) |        \
                                     PIN_ASCR_DISABLED(GPIOF_PIN1) |        \
                                     PIN_ASCR_DISABLED(GPIOF_PIN2) |        \
                                     PIN_ASCR_DISABLED(GPIOF_PIN3) |        \
                                     PIN_ASCR_DISABLED(GPIOF_PIN4) |        \
                                     PIN_ASCR_DISABLED(GPIOF_PIN5) |        \
                                     PIN_ASCR_DISABLED(GPIOF_PIN6) |        \
                                     PIN_ASCR_DISABLED(GPIOF_PIN7) |        \
                                     PIN_ASCR_DISABLED(GPIOF_PIN8) |        \
                                     PIN_ASCR_DISABLED(GPIOF_PIN9) |        \
                                     PIN_ASCR_DISABLED(GPIOF_PIN10) |       \
                                     PIN_ASCR_DISABLED(GPIOF_PIN11) |       \
                                     PIN_ASCR_DISABLED(GPIOF_PIN12) |       \
                                     PIN_ASCR_DISABLED(GPIOF_PIN13) |       \
                                     PIN_ASCR_DISABLED(GPIOF_PIN14) |       \
                                     PIN_ASCR_DISABLED(GPIOF_PIN15))
#define VAL_GPIOF_LOCKR             (PIN_LOCKR_DISABLED(GPIOF_PIN0) |       \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN1) |       \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN2) |       \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN3) |       \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN4) |       \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN5) |       \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN6) |       \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN7) |       \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN8) |       \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN9) |       \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN10) |      \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN11) |      \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN12) |      \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN13) |      \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN14) |      \
                                     PIN_LOCKR_DISABLED(GPIOF_PIN15))

/*
 * GPIOG setup:
 *
 * PG0  - PIN0                      (analog).
 * PG1  - PIN1                      (analog).
 * PG2  - PIN2                      (analog).
 * PG3  - PIN3                      (analog).
 * PG4  - PIN4                      (analog).
 * PG5  - PIN5                      (analog).
 * PG6  - PIN6                      (analog).
 * PG7  - PIN7                      (analog).
 * PG8  - PIN8                      (analog).
 * PG9  - PIN9                      (analog).
 * PG10 - PIN10                     (analog).
 * PG11 - PIN11                     (analog).
 * PG12 - PIN12                     (analog).
 * PG13 - PIN13                     (analog).
 * PG14 - PIN14                     (analog).
 * PG15 - PIN15                     (analog).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_ANALOG(GPIOG_PIN0) |          \
                                     PIN_MODE_ANALOG(GPIOG_PIN1) |          \
                                     PIN_MODE_ANALOG(GPIOG_PIN2) |          \
                                     PIN_MODE_ANALOG(GPIOG_PIN3) |          \
                                     PIN_MODE_ANALOG(GPIOG_PIN4) |          \
                                     PIN_MODE_ANALOG(GPIOG_PIN5) |          \
                                     PIN_MODE_ANALOG(GPIOG_PIN6) |          \
                                     PIN_MODE_ANALOG(GPIOG_PIN7) |          \
                                     PIN_MODE_ANALOG(GPIOG_PIN8) |          \
                                     PIN_MODE_ANALOG(GPIOG_PIN9) |          \
                                     PIN_MODE_ANALOG(GPIOG_PIN10) |         \
                                     PIN_MODE_ANALOG(GPIOG_PIN11) |         \
                                     PIN_MODE_ANALOG(GPIOG_PIN12) |         \
                                     PIN_MODE_ANALOG(GPIOG_PIN13) |         \
                                     PIN_MODE_ANALOG(GPIOG_PIN14) |         \
                                     PIN_MODE_ANALOG(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOG_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_FLOATING(GPIOG_PIN0) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN1) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN5) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_HIGH(GPIOG_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN7, 0U))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN15, 0U))
#define VAL_GPIOG_ASCR              (PIN_ASCR_DISABLED(GPIOG_PIN0) |        \
                                     PIN_ASCR_DISABLED(GPIOG_PIN1) |        \
                                     PIN_ASCR_DISABLED(GPIOG_PIN2) |        \
                                     PIN_ASCR_DISABLED(GPIOG_PIN3) |        \
                                     PIN_ASCR_DISABLED(GPIOG_PIN4) |        \
                                     PIN_ASCR_DISABLED(GPIOG_PIN5) |        \
                                     PIN_ASCR_DISABLED(GPIOG_PIN6) |        \
                                     PIN_ASCR_DISABLED(GPIOG_PIN7) |        \
                                     PIN_ASCR_DISABLED(GPIOG_PIN8) |        \
                                     PIN_ASCR_DISABLED(GPIOG_PIN9) |        \
                                     PIN_ASCR_DISABLED(GPIOG_PIN10) |       \
                                     PIN_ASCR_DISABLED(GPIOG_PIN11) |       \
                                     PIN_ASCR_DISABLED(GPIOG_PIN12) |       \
                                     PIN_ASCR_DISABLED(GPIOG_PIN13) |       \
                                     PIN_ASCR_DISABLED(GPIOG_PIN14) |       \
                                     PIN_ASCR_DISABLED(GPIOG_PIN15))
#define VAL_GPIOG_LOCKR             (PIN_LOCKR_DISABLED(GPIOG_PIN0) |       \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN1) |       \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN2) |       \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN3) |       \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN4) |       \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN5) |       \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN6) |       \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN7) |       \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN8) |       \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN9) |       \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN10) |      \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN11) |      \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN12) |      \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN13) |      \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN14) |      \
                                     PIN_LOCKR_DISABLED(GPIOG_PIN15))

/*
 * GPIOH setup:
 *
 * PH0  - PIN0                      (analog).
 * PH1  - PIN1                      (analog).
 * PH2  - PIN2                      (analog).
 * PH3  - PIN3                      (analog).
 * PH4  - PIN4                      (analog).
 * PH5  - PIN5                      (analog).
 * PH6  - PIN6                      (analog).
 * PH7  - PIN7                      (analog).
 * PH8  - PIN8                      (analog).
 * PH9  - PIN9                      (analog).
 * PH10 - PIN10                     (analog).
 * PH11 - PIN11                     (analog).
 * PH12 - PIN12                     (analog).
 * PH13 - PIN13                     (analog).
 * PH14 - PIN14                     (analog).
 * PH15 - PIN15                     (analog).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_ANALOG(GPIOH_PIN0) |          \
                                     PIN_MODE_ANALOG(GPIOH_PIN1) |          \
                                     PIN_MODE_ANALOG(GPIOH_PIN2) |          \
                                     PIN_MODE_ANALOG(GPIOH_PIN3) |          \
                                     PIN_MODE_ANALOG(GPIOH_PIN4) |          \
                                     PIN_MODE_ANALOG(GPIOH_PIN5) |          \
                                     PIN_MODE_ANALOG(GPIOH_PIN6) |          \
                                     PIN_MODE_ANALOG(GPIOH_PIN7) |          \
                                     PIN_MODE_ANALOG(GPIOH_PIN8) |          \
                                     PIN_MODE_ANALOG(GPIOH_PIN9) |          \
                                     PIN_MODE_ANALOG(GPIOH_PIN10) |         \
                                     PIN_MODE_ANALOG(GPIOH_PIN11) |         \
                                     PIN_MODE_ANALOG(GPIOH_PIN12) |         \
                                     PIN_MODE_ANALOG(GPIOH_PIN13) |         \
                                     PIN_MODE_ANALOG(GPIOH_PIN14) |         \
                                     PIN_MODE_ANALOG(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_HIGH(GPIOH_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN1) |          \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(GPIOH_PIN0) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN1) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN5) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0U))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0U))
#define VAL_GPIOH_ASCR              (PIN_ASCR_DISABLED(GPIOH_PIN0) |        \
                                     PIN_ASCR_DISABLED(GPIOH_PIN1) |        \
                                     PIN_ASCR_DISABLED(GPIOH_PIN2) |        \
                                     PIN_ASCR_DISABLED(GPIOH_PIN3) |        \
                                     PIN_ASCR_DISABLED(GPIOH_PIN4) |        \
                                     PIN_ASCR_DISABLED(GPIOH_PIN5) |        \
                                     PIN_ASCR_DISABLED(GPIOH_PIN6) |        \
                                     PIN_ASCR_DISABLED(GPIOH_PIN7) |        \
                                     PIN_ASCR_DISABLED(GPIOH_PIN8) |        \
                                     PIN_ASCR_DISABLED(GPIOH_PIN9) |        \
                                     PIN_ASCR_DISABLED(GPIOH_PIN10) |       \
                                     PIN_ASCR_DISABLED(GPIOH_PIN11) |       \
                                     PIN_ASCR_DISABLED(GPIOH_PIN12) |       \
                                     PIN_ASCR_DISABLED(GPIOH_PIN13) |       \
                                     PIN_ASCR_DISABLED(GPIOH_PIN14) |       \
                                     PIN_ASCR_DISABLED(GPIOH_PIN15))
#define VAL_GPIOH_LOCKR             (PIN_LOCKR_DISABLED(GPIOH_PIN0) |       \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN1) |       \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN2) |       \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN3) |       \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN4) |       \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN5) |       \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN6) |       \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN7) |       \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN8) |       \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN9) |       \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN10) |      \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN11) |      \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN12) |      \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN13) |      \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN14) |      \
                                     PIN_LOCKR_DISABLED(GPIOH_PIN15))

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* BOARD_H */
