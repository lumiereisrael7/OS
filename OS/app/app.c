#include"app.h"

volatile unsigned int tim;

void boot_fired(void)
{
    led_init();
    led_white_on();
    led_blue_on();
    led_red_on();
}


