#include <avr/io.h>
#include <util/delay.h> 

int main()
 { 	//se declara como salidas al PB1 y PB2, pin 9 y 10 del arduino
	DDRB = 0b111;
	PORTB = 0b101;
   while (1)
	{
		PORTB ^= (1<<PB1) | (1<<PB2);	//se habilita para que gire en una sentido
		_delay_ms(2000);
	}
   return 0;
 }
