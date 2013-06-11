#include <ch.h>
#include <hal.h>
#include <stm32f10x.h>

static WORKING_AREA(waBlinker, 128);
static msg_t blinker(void *arg) {
    (void) arg;
    chRegSetThreadName("blinker");
    while (!chThdShouldTerminate()) {
        palTogglePad(GPIOB, GPIOB_ARMKA_LED);
        chThdSleepMilliseconds(500);
    }
    return 0;
}

int main(void) {
    halInit();
    chSysInit();

    chThdCreateStatic(waBlinker, sizeof(waBlinker), NORMALPRIO, blinker, NULL);
    
    while (!chThdShouldTerminate()) {
        chThdSleepMilliseconds(5000);
    }
}
