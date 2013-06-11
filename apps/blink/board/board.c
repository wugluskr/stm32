#include "ch.h"
#include "hal.h"

/**
 * Статическая конфигурация модуля PAL по данным,
 * определённым в заголовочном файле.
 */
#if HAL_USE_PAL || defined(__DOXYGEN__)
const PALConfig pal_default_config =
{
    {VAL_GPIOAODR, VAL_GPIOACRL, VAL_GPIOACRH},
    {VAL_GPIOBODR, VAL_GPIOBCRL, VAL_GPIOBCRH},
    {VAL_GPIOCODR, VAL_GPIOCCRL, VAL_GPIOCCRH},
    {VAL_GPIODODR, VAL_GPIODCRL, VAL_GPIODCRH},
    {VAL_GPIOEODR, VAL_GPIOECRL, VAL_GPIOECRH},
};
#endif

/*
 * Первоначальная инициализация кода.
 * Данная инициализация должна проводиться сразу после настройки стека
 * и до любой другой инициализации.
 */
void __early_init(void) {
    stm32_clock_init();
}

/*
 * Инициализационный код, специфичны для используемой платы.
 */
void boardInit(void) {
}
