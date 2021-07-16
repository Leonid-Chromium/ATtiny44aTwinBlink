/*
 * GccApplication1.c
 *
 * Created: 12.07.2021 17:02:37
 * Author : Leo
 */ 

#include <avr/io.h>
#include <avr/delay.h>
#include <avr/interrupt.h>

#define F_CPU = 1000000UL;

#define LED1 PORTA2
#define LED2 PORTA3

#define BUTP PORTA0
#define BUTM PORTA1

int stime = 1000;

void delay(int ms){
	for(;ms;ms--)
	_delay_ms(1);
}

//ISR(PCINT0_vect)
//{
//	if (!((stime+100)>3000))
//	{
//		stime+100;
//	}
//}

void blink()
{
	PORTA = (1<<LED1)|(0<<LED2);
	delay(stime);
	PORTA = (0<<LED1)|(1<<LED2);
	delay(stime);
}

int main(void)
{
//	sei();
	DDRA = (1<<LED1)|(1<<LED2)|(0<<BUTM)|(0<<BUTP);
	PORTA = (1<<BUTP)|(1<<BUTM);
    while (1) 
    {
		if(PINA0==0)
		{
			stime+100;
		}
		blink();
    }
}

