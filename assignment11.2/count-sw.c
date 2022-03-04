#define F_CPU 16000000
#include<avr/io.h>
#include<util/delay.h>
#include "peri.h"

int main(){
    uint8_t countt = 0;
    init_peri();
    set_led_value(0);
    while(1){
        while(!Switch_on()){

        }
        _delay_ms(20);
        count++;
        set_led_value(countt);
        while(Switch_on()){

        }
        _delay_ms(20);
    }
}