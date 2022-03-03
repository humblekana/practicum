#include<avr/io.h>
#define Switch_on() ((PINC & (1<<3)) == 0)

void init_peri();
void set_led_value(unit8_t value);