#include <avr/io.h>
#include <util/delay.h>

const int demora = 1000;
char num[10] = {0B1000000,0B1111001,0B0100100,0B0110000,0B0011001,0B0010010,0B0000011,0B1111000,0B0000000,0B0011000};
int main()
{ 
 DDRD = 0B1111111;
 	while (1)
      {
	    	PORTD = num[0];
		_delay_ms(demora);
		PORTD = num[1];
		_delay_ms(demora);
	        PORTD = num[2];
		_delay_ms(demora);
	        PORTD = num[3];
		_delay_ms(demora);
		PORTD = num[4];
		_delay_ms(demora);
		PORTD = num[5];
		_delay_ms(demora);
	        PORTD = num[6];
		_delay_ms(demora);
		PORTD = num[7];
		_delay_ms(demora);
		PORTD = num[8];
		_delay_ms(demora);
		PORTD = num[9];
		_delay_ms(demora);

      }     
}
