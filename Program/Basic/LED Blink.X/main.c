/*
 * File:   main.c
 * Author: Balaji
 *
 * Created on 12 March, 2022, 3:30 PM
 */


#include <xc.h>
#pragma config WDTE = OFF  //Watchdog Timer Enable bit (WDT disabled)

void init_config(void)
{
    //set PORTD as output
    TRISD = 0x00;
    
    //set all LEDs OFF
    PORTD = 0x00;
}

void main(void)
{
    unsigned long int delay;
    init_config();
    
    while(1)
    {
        //Turn ON LED
        PORTD = 0x01; //0000 0001
        
        //Delay
        for(delay=0;delay<50000;delay++);
        
        //Turn OFF LED
        PORTD= 0x00;//1111 0000
        
        //Delay
        for(delay=0;delay<50000;delay++);
        
    }
    return;
}