/*
 * mySPI.h
 *
 *  Created on: Oct 10, 2019
 *      Author: Andi
 */

#ifndef MYSPI_MYSPI_H_
#define MYSPI_MYSPI_H_

#include <avr/io.h>
#include <stdio.h>

#define DDR_SPI DDRB
#define DD_SS DDB0
#define DD_SCK DDB1
#define DD_MOSI DDB2
#define DD_MISO DDB3

//SPI Slave
void SPI_SlaveInit(void);
char SPI_SlaveReceive(char cData);
char SPI_SlavePrint(char *text);
char SPI_SlavePrintNum(uint16_t number);

#endif /* MYSPI_MYSPI_H_ */
