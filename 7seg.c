#include <avr/io.h>
#include <avr/sleep.h>
#include <util/delay.h>

uint8_t p1 = 0;
uint8_t p2 = 1;
uint8_t p3 = 0;
uint8_t p4 = 3;

uint16_t demora = 50;  //5 para motor físico
char num[10] = {0B1000000,0B111001,0B0100100,0B0110000,0B0011001,0B0010010,0B0000011,0B1111000,0B0000000,0B0011000};

void izq(){
  PORTB |= (1 << p1);
	    PORTB &= ~(1 << p2);
	    PORTB &= ~(1 << p3);
	    PORTB &= ~(1 << p4);
	    _delay_ms (demora);
	    
	    PORTB |= (1 << p1);
	    PORTB |= (1 << p2);
	    PORTB &= ~(1 << p3);
	    PORTB &= ~(1 << p4);
	    _delay_ms (demora);
	    
	    PORTB &= ~(1 << p1);
	    PORTB |= (1 << p2);
	    PORTB &= ~(1 << p3);
	    PORTB &= ~(1 << p4);
	    _delay_ms (demora);
	    
	    PORTB &= ~(1 << p1);
	    PORTB |= (1 << p2);
	    PORTB |= (1 << p3);
	    PORTB &= ~(1 << p4);
	    _delay_ms (demora);
	    
	    PORTB &= ~(1 << p1);
	    PORTB &= ~(1 << p2);
	    PORTB |= (1 << p3);
	    PORTB &= ~(1 << p4);
	    _delay_ms (demora);
	    
	    PORTB &= ~(1 << p1);
	    PORTB &= ~(1 << p2);
	    PORTB |= (1 << p3);
	    PORTB |= (1 << p4);
	    _delay_ms (demora);
	    
	    PORTB &= ~(1 << p1);
	    PORTB &= ~(1 << p2);
	    PORTB &= ~(1 << p3);
	    PORTB |= (1 << p4);
	    _delay_ms (demora);
	    
     	    PORTB |= (1 << p1);
	    PORTB &= ~(1 << p2);
	    PORTB &= ~(1 << p3);
	    PORTB |= (1 << p4);
	    _delay_ms (demora);
}

int main()
{ 

    //DDRB = (1 << p1) | (1 << p2) | (1 << p3) | (1 << p4); //pines 1,2,3,4 del puerto B como salida
    DDRB = 0B11111111;
	DDRD = 1<<6;
	while (1)
      {
        //izq();
	    PORTB = num[0];
		PORTD = (1<<6);
		_delay_ms(1000);
	    PORTB = num[1];
		PORTD = (1<<6);
		_delay_ms(1000);
	    PORTB = num[2];
		PORTD &= ~(1<<6);
		_delay_ms(1000);
	    PORTB = num[3];
		PORTD &= ~(1<<6);
		_delay_ms(1000);
		PORTB = num[4];
		PORTD &= ~(1<<6);
		_delay_ms(1000);
		PORTB = num[5];
		PORTD &= ~(1<<6);
		_delay_ms(1000);
	    PORTB = num[6];
		PORTD &= ~(1<<6);
		_delay_ms(1000);
		PORTB = num[7];
		PORTD = (1<<6);
		_delay_ms(1000);
		PORTB = num[8];
		PORTD &= ~(1<<6);
		_delay_ms(1000);
		PORTB = num[9];
		PORTD &= ~(1<<6);
		_delay_ms(1000);

      }     
}
