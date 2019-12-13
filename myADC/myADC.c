/*
 * myADC.c
 *
 *  Created on: Oct 10, 2019
 *      Author: Andi
 */
#include "myADC.h"
uint8_t temp1, temp2;
void myADC_init(void){
	ADCSRA |= (1<<ADPS2) | (1<<ADPS1);
	ADMUX |= (1<<REFS0);
	ADCSRA |= (1 <<ADEN);
}


void myADC_read(uint8_t channel, uint8_t *high, uint8_t *low, uint16_t *full){
	ADMUX &= ~(0x1F);
	ADMUX |= channel;
	ADCSRA |= (1<<ADSC);
	while(!(ADCSRA&(1<<ADIF)));
	ADCSRA |= (1<<ADIF);
	tLow = ADCL;
	tHigh = ADCH;
	*low = tLow;
	*high = tHigh;
	*full=(tHigh<<8) | tLow;
}
