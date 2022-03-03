#define F_CPU 16000000
#include<avr/io.h>
#include<util/delay.h>
#include "peri.h"


int main(){
    uint16_t light;
    init_peri();
    while(1){
        light = read_adc(4);
        if (light < 200){
            set_led_value(1);
        }else if (light < 500){
            set_led_value(2);
        }else{
            set_led_value(4);
        }
    }
    
}