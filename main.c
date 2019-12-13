/*
 * main.c
 *
 *  Created on: Sep 6, 2019
 *      Author: Andi
 */

#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "myADC/myADC.h"
#include "mySPI/mySPI.h"
#include "myUART/myUART.h"
#include "mySmartSensor/mySmartSensor.h"

uint8_t low, high;

#define SW1 PB5
#define SW2 PB4
#define SW3 PH6
#define SW4 PH5

unsigned char buff;

int main(void){
	myADC_init();
	SPI_SlaveInit();
	USART_Init();
	DDRA = 0xFF;
	while(1){
		SmartSensor();
//		_delay_ms(100);
	}
}

