/*
 * myADC.h
 *
 *  Created on: Oct 10, 2019
 *      Author: Andi
 */

#ifndef MYADC_MYADC_H_
#define MYADC_MYADC_H_

#include <avr/io.h>

uint8_t tLow, tHigh;
void myADC_init(void);
void myADC_read(uint8_t channel, uint8_t *high, uint8_t *low, uint16_t *full);

#endif /* MYADC_MYADC_H_ */
