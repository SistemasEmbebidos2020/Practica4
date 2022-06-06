
#include <avr/io.h>
#include <util/delay.h>

int ENA = 0;
int IN1 = 1;
int IN2 = 2;

int main()
 { 
	DDRB = 0b111;
   while (1)
	{
		PORTB = ((1<<ENA)|(1<<IN1)) & ~(1<<IN2);
		_delay_ms(2000);

		PORTB = ((1<<ENA)|(1<<IN2)) & ~(1<<IN1);
		_delay_ms(1000);
	}
   return 0;
 }
