#include <avr/io.h>
#include <util/delay.h>


const int demora = 1000; 
char num[10] = {0B1000000,0B111001,0B0100100,0B0110000,0B0011001,0B0010010,0B0000011,0B1111000,0B0000000,0B0011000};
int g = PD6;
int main()
{ 
 DDRB = 0B11111111;
 DDRD = 1<<6;
	while (1)
      {
	    PORTB = num[0];
		PORTD = (1<<g);
		_delay_ms(demora);
	        PORTB = num[1];
		PORTD = (1<<g);
		_delay_ms(demora);
	        PORTB = num[2];
		PORTD &= ~(1<<g);
		_delay_ms(demora);
	        PORTB = num[3];
		PORTD &= ~(1<<g);
		_delay_ms(demora);
		PORTB = num[4];
		PORTD &= ~(1<<g);
		_delay_ms(demora);
		PORTB = num[5];
		PORTD &= ~(1<<g);
		_delay_ms(demora);
	        PORTB = num[6];
		PORTD &= ~(1<<g);
		_delay_ms(demora);
		PORTB = num[7];
		PORTD = (1<<g);
		_delay_ms(demora);
		PORTB = num[8];
		PORTD &= ~(1<<g);
		_delay_ms(demora);
		PORTB = num[9];
		PORTD &= ~(1<<g);
		_delay_ms(demora);

      }     
}
