/*
 * hossamtest.c
 *
 * Created: 4/14/2020 4:44:53 PM
 * Author : MAZDA
 */ 

#include <avr/io.h>
#include "bitmath.h"
#define F_CPU 16000000
#include <util/delay.h>
#include "STD_Types.h"
int main(void)
{
	CLR_BIT(DDRB,0); //PB0 as input pin
	SET_BIT(DDRB,3);//pd3 as an output
	SET_BIT(DDRB,0);
	CLR_BIT(DDRD,3);
	CLR_BIT(DDRC,2);
	CLR_BIT(DDRC,7);
	SET_BIT(DDRA,2);
	CLR_BIT(DDRD,2);
	while (1)
	{
		if(GET_BIT(PINB,0)==1){
			_delay_ms(30);
			SET_BIT(PORTA,3);
			_delay_ms(2000);
			CLR_BIT(PORTA,3);
			_delay_ms(3000);
			SET_BIT(PORTA,3);
			_delay_ms(1000);
		}
		else{
			CLR_BIT(PORTA,3);
			_delay_ms(100);
		}
		  if (GET_BIT(PINB,4)==1)
		  {
			  SET_BIT(PORTC,2);
			  SET_BIT(PORTC,7);
			  SET_BIT(PORTD,3);
			  _delay_ms(2000);
		  }
		  else{
			  CLR_BIT(PORTC,2);
			  CLR_BIT(PORTC,7);
			  CLR_BIT(PORTD,3);
			  _delay_ms(1000);
		  }
		  if (GET_BIT(PIND,2)==1)
		  
		  {
			  SET_BIT(PORTA,2);
			  _delay_ms(3000);
		  }
		  else{
			  CLR_BIT(PORTA,2);
		  }
	}
}