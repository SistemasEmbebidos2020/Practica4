#include <Arduino.h>

const int demora = 1000;
char num[10] = {0B1000000,0B1111001,0B0100100,0B0110000,0B0011001,0B0010010,0B0000011,0B1111000,0B0000000,0B0011000};

void setup() {
  DDRD = 0B1111111;
}

void loop() {
  PORTD = num[0];
	delay(demora);
	PORTD = num[1];
	delay(demora);
	PORTD = num[2];
	delay(demora);
	PORTD = num[3];
	delay(demora);
	PORTD = num[4];
	delay(demora);
	PORTD = num[5];
	delay(demora);
	PORTD = num[6];
	delay(demora);
	PORTD = num[7];
	delay(demora);
	PORTD = num[8];
	delay(demora);
	PORTD = num[9];
	delay(demora);

}
