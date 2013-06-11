#ifndef _BOARD_H_
#define _BOARD_H_

/* Идентификатор платы */
#define BOARD_ARMKA_IR_TESTER
#define BOARD_NAME              "ARMka IR Tester"

/* Частоты кварцев на плате */
#define STM32_LSECLK            32768
#define STM32_HSECLK            8000000

/* Тип микроконтроллера, см в ChibiOS/os/hal/platforms/hal_lld.h */
#define STM32F10X_MD_VL

/* Идентификаторы используемых портов ввода/вывода */
#define GPIOB_ARMKA_LED         0

/*
 * Настройка портов ввода вывода, указанная здесь конфигурация
 * автоматически настраивается после инициализации кода.
 *
 * Расшифровка:
 *   0 - Аналоговый ввод.
 *   1 - Вывод Push Pull на 10 МГц.
 *   2 - Вывод Push Pull на 2 МГц.
 *   3 - Вывод Push Pull на 50 МГц.
 *   4 - Цифровой вход.
 *   5 - Вывод Open Drain на 10 МГц.
 *   6 - Вывод Open Drain на 2 МГц.
 *   7 - Вывод Open Drain на 50 МГц.
 *   8 - Цифровой вход с подтяжкой в зависимости от значения в ODR.
 *   9 - Вывод Push Pull на 10 МГц от периферии.
 *   A - Вывод Push Pull на 2 МГц от периферии.
 *   B - Вывод Push Pull на 50 МГц от периферии.
 *   C - Зарезервировано.
 *   D - Вывод Open Drain на 10 МГц от периферии.
 *   E - Вывод Open Drain на 2 МГц от периферии.
 *   F - Вывод Open Drain на 50 МГц от периферии.
 * В референсной доке по STM32 расписаны подробности.
 */

/*
 * Настройка порта A.
 * Все порты настроены на вход с подтяжкой.
 */
#define VAL_GPIOACRL            0x88888888      /*  PA7...PA0 */
#define VAL_GPIOACRH            0x88888888      /* PA15...PA8 */
#define VAL_GPIOAODR            0xFFFFFFFF

/*
 * Настройка порта B.
 * Все порты настроены на вход с подтяжкой, кроме:
 * PB0  - Вывод Push Pull на 2 МГц. - GPIOB_ARMKA_LED
 */
#define VAL_GPIOBCRL            0x88888882      /*  PB7...PB0 */
#define VAL_GPIOBCRH            0x88888888      /* PB15...PB8 */
#define VAL_GPIOBODR            0xFFFFFFFF

/*
 * Настройка порта C. Данный порт не разведён на плате.
 * Все порты настроены на вход с подтяжкой.
 */
#define VAL_GPIOCCRL            0x88888888      /*  PC7...PC0 */
#define VAL_GPIOCCRH            0x88888888      /* PC15...PC8 */
#define VAL_GPIOCODR            0xFFFFFFFF

/*
 * Настройка порта D. Данный порт не разведён на плате.
 * Все порты настроены на вход с подтяжкой.
 */
#define VAL_GPIODCRL            0x88888888      /*  PD7...PD0 */
#define VAL_GPIODCRH            0x88888888      /* PD15...PD8 */
#define VAL_GPIODODR            0xFFFFFFFF

/*
 * Настройка порта E. Данный порт не разведён на плате.
 * Все порты настроены на вход с подтяжкой.
 */
#define VAL_GPIOECRL            0x88888888      /*  PE7...PE0 */
#define VAL_GPIOECRH            0x88888888      /* PE15...PE8 */
#define VAL_GPIOEODR            0xFFFFFFFF

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
