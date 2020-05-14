/*
 * timer0.c
 *
 * Created: 5/14/2020 5:21:59 PM
 * Author : MAZDA
 */ 

#define F_CPU  16000000
#include <avr/io.h>
#include <avr/interrupt.h>
#include "bitmath.h"
#include <util/delay.h>
#define TOGGLE(var,bit)      var^=(1<<bit)
volatile unsigned int counter=0;
int main(void)
{
	
	
	TCCR0=(1<<CS00)|(1<<CS01); 
	
	TIMSK=(1<<TOIE0);
	
	DDRC=(1<<2);     
	DDRC|=(1<<7);   
	DDRD=(1<<3);    
	
	sei();
	while(1)
		{
		if(counter>=50)
		{
			    PORTC^=(1<<2);
				_delay_ms(10);
		    
	    	}
			 if(counter>=100)
			{
				PORTC^=(1<<7);
				_delay_ms(10);
			
			}
			 if(counter>=150)
			{
				PORTD^=(1<<3);
				_delay_ms(10);
				counter=0;
			}

     }
}

ISR(TIMER0_OVF_vect)
{
	counter++;
}





