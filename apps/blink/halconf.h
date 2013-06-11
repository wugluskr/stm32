#ifndef _HALCONF_H_
#define _HALCONF_H_

#include "mcuconf.h"

/* Выключатель для модуля TM */
#if !defined(HAL_USE_TM) || defined(__DOXYGEN__)
#define HAL_USE_TM                  FALSE
#endif

/* Выключатель для модуля PAL. Он нам будет нужен для мигания светодиодом. */
#if !defined(HAL_USE_PAL) || defined(__DOXYGEN__)
#define HAL_USE_PAL                 TRUE
#endif

/* Выключатель для модуля ADC */
#if !defined(HAL_USE_ADC) || defined(__DOXYGEN__)
#define HAL_USE_ADC                 FALSE
#endif

/* Выключатель для модуля CAN */
#if !defined(HAL_USE_CAN) || defined(__DOXYGEN__)
#define HAL_USE_CAN                 FALSE
#endif

/* Выключатель для модуля EXT */
#if !defined(HAL_USE_EXT) || defined(__DOXYGEN__)
#define HAL_USE_EXT                 FALSE
#endif

/* Выключатель для модуля GPT */
#if !defined(HAL_USE_GPT) || defined(__DOXYGEN__)
#define HAL_USE_GPT                 FALSE
#endif

/* Выключатель для модуля I2C */
#if !defined(HAL_USE_I2C) || defined(__DOXYGEN__)
#define HAL_USE_I2C                 FALSE
#endif

/* Выключатель для модуля ICU */
#if !defined(HAL_USE_ICU) || defined(__DOXYGEN__)
#define HAL_USE_ICU                 FALSE
#endif

/* Выключатель для модуля MAC */
#if !defined(HAL_USE_MAC) || defined(__DOXYGEN__)
#define HAL_USE_MAC                 FALSE
#endif

/* Выключатель для модуля MMC_SPI */
#if !defined(HAL_USE_MMC_SPI) || defined(__DOXYGEN__)
#define HAL_USE_MMC_SPI             FALSE
#endif

/* Выключатель для модуля PWM */
#if !defined(HAL_USE_PWM) || defined(__DOXYGEN__)
#define HAL_USE_PWM                 FALSE
#endif

/* Выключатель для модуля RTC */
#if !defined(HAL_USE_RTC) || defined(__DOXYGEN__)
#define HAL_USE_RTC                 FALSE
#endif

/* Выключатель для модуля SDC */
#if !defined(HAL_USE_SDC) || defined(__DOXYGEN__)
#define HAL_USE_SDC                 FALSE
#endif

/* Выключатель для модуля SERIAL */
#if !defined(HAL_USE_SERIAL) || defined(__DOXYGEN__)
#define HAL_USE_SERIAL              FALSE
#endif

/* Выключатель для модуля SERIAL по USB */
#if !defined(HAL_USE_SERIAL_USB) || defined(__DOXYGEN__)
#define HAL_USE_SERIAL_USB          FALSE
#endif

/* Выключатель для модуля SPI */
#if !defined(HAL_USE_SPI) || defined(__DOXYGEN__)
#define HAL_USE_SPI                 FALSE
#endif

/* Выключатель для модуля UART */
#if !defined(HAL_USE_UART) || defined(__DOXYGEN__)
#define HAL_USE_UART                FALSE
#endif

/* Выключатель для модуля USB */
#if !defined(HAL_USE_USB) || defined(__DOXYGEN__)
#define HAL_USE_USB                 FALSE
#endif

/*===========================================================================*/
/* Настройки модуля ADC.                                                     */
/*===========================================================================*/

#if !defined(ADC_USE_WAIT) || defined(__DOXYGEN__)
#define ADC_USE_WAIT                FALSE
#endif

#if !defined(ADC_USE_MUTUAL_EXCLUSION) || defined(__DOXYGEN__)
#define ADC_USE_MUTUAL_EXCLUSION    FALSE
#endif

/*===========================================================================*/
/* Настройки модуля CAN.                                                     */
/*===========================================================================*/

#if !defined(CAN_USE_SLEEP_MODE) || defined(__DOXYGEN__)
#define CAN_USE_SLEEP_MODE          FALSE
#endif

/*===========================================================================*/
/* Настройки модуля I2C.                                                     */
/*===========================================================================*/

#if !defined(I2C_USE_MUTUAL_EXCLUSION) || defined(__DOXYGEN__)
#define I2C_USE_MUTUAL_EXCLUSION    FALSE
#endif

/*===========================================================================*/
/* Настройки модуля MAC.                                                     */
/*===========================================================================*/

#if !defined(MAC_USE_EVENTS) || defined(__DOXYGEN__)
#define MAC_USE_EVENTS              FALSE
#endif

/*===========================================================================*/
/* Настройки модуля MMC_SPI.                                                 */
/*===========================================================================*/

#if !defined(MMC_SECTOR_SIZE) || defined(__DOXYGEN__)
#define MMC_SECTOR_SIZE             512
#endif

#if !defined(MMC_NICE_WAITING) || defined(__DOXYGEN__)
#define MMC_NICE_WAITING            FALSE
#endif

#if !defined(MMC_POLLING_INTERVAL) || defined(__DOXYGEN__)
#define MMC_POLLING_INTERVAL        10
#endif

#if !defined(MMC_POLLING_DELAY) || defined(__DOXYGEN__)
#define MMC_POLLING_DELAY           10
#endif

#if !defined(MMC_USE_SPI_POLLING) || defined(__DOXYGEN__)
#define MMC_USE_SPI_POLLING         FALSE
#endif

/*===========================================================================*/
/* Настройки модуля SDC.                                                     */
/*===========================================================================*/

#if !defined(SDC_INIT_RETRY) || defined(__DOXYGEN__)
#define SDC_INIT_RETRY              100
#endif

#if !defined(SDC_MMC_SUPPORT) || defined(__DOXYGEN__)
#define SDC_MMC_SUPPORT             FALSE
#endif

#if !defined(SDC_NICE_WAITING) || defined(__DOXYGEN__)
#define SDC_NICE_WAITING            FALSE
#endif

/*===========================================================================*/
/* Настройки модуля SERIAL.                                                  */
/*===========================================================================*/

#if !defined(SERIAL_DEFAULT_BITRATE) || defined(__DOXYGEN__)
#define SERIAL_DEFAULT_BITRATE      115200
#endif

#if !defined(SERIAL_BUFFERS_SIZE) || defined(__DOXYGEN__)
#define SERIAL_BUFFERS_SIZE         64
#endif

/*===========================================================================*/
/* Настройки модуля SPI.                                                     */
/*===========================================================================*/

#if !defined(SPI_USE_WAIT) || defined(__DOXYGEN__)
#define SPI_USE_WAIT                FALSE
#endif

#if !defined(SPI_USE_MUTUAL_EXCLUSION) || defined(__DOXYGEN__)
#define SPI_USE_MUTUAL_EXCLUSION    FALSE
#endif

#endif /* _HALCONF_H_ */
