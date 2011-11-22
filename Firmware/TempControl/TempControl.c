/*
 * TempControl.c
 *
 * Created: 11/10/2011 4:09:38 PM
 *  Author: Jack Linke
 */ 

#ifndef F_CPU            // If the frequency isn't already defined,
#define F_CPU 20000000UL // Define the frequency to be 20 MHz
#endif


#include <avr/io.h>
#include <util/delay_basic.h>

int main(void)
{
    while(1)
    {
        //TODO:: Please write your application code 
		
		_delay_loop_1(100);
    }
}