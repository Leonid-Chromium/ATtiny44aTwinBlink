/*
 * GccApplication1.c
 *
 * Created: 12.07.2021 17:02:37
 * Author : Leo
 */ 

#include <avr/io.h>
#include <avr/delay.h>

#define F_CPU = 1000000UL;

int main(void)
{
	DDRA = 255;
    /* Replace with your application code */
    while (1) 
    {
		PORTA = 0b00000001;
		_delay_ms(1000);
		PORTA = 0b00000010;
		_delay_ms(1000);
    }
}

