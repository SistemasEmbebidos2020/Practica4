
#include <avr/io.h>
#include <util/delay.h>

int main()
 { 
	DDRB = 0b111;
   while (1)
	{
		PORTB = (1<<PB1) & ~(1<<PB2);
		_delay_ms(2000);

		PORTB = (1<<PB2) & ~(1<<PB1);
		_delay_ms(1000);
	}
   return 0;
 }
