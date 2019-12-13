/*
 * mySmartSensor.h
 *
 *  Created on: Dec 11, 2019
 *      Author: Andi
 */

#ifndef MYSMARTSENSOR_MYSMARTSENSOR_H_
#define MYSMARTSENSOR_MYSMARTSENSOR_H_

#include "myADC.h"
#include "myUART.h"
#include "mySPI.h"
#include "stdint.h"

void SmartSensor(void);
/*--*/
void calibrate_S0(uint8_t *ThrsHigh, uint8_t *ThrsLow, uint16_t *ThrsFull);
void calibrate_S1(uint8_t *ThrsHigh, uint8_t *ThrsLow, uint16_t *ThrsFull);
void calibrate_S2(uint8_t *ThrsHigh, uint8_t *ThrsLow, uint16_t *ThrsFull);
uint8_t digitalRaw(uint16_t Thrs2, uint16_t Thrs1, uint16_t Thrs0);
uint8_t dicision(uint8_t in_digitalRaw);
void calibrateAll(void);
void calibrateAuto(void);


#endif /* MYSMARTSENSOR_MYSMARTSENSOR_H_ */
