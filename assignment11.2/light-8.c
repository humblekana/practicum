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
            set_led_value(0);
        }else if (light < 300){
            set_led_value(1);
        }else if (light < 400){
            set_led_value(2);
        }else if (light < 500){
            set_led_value(3);
        }else if (light < 600){
            set_led_value(4);
        }else if (light < 700){
            set_led_value(5);
        }else if (light < 800){
            set_led_value(6);
        }else{
            set_led_value(7);
        }
    }
    
}