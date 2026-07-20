#ifndef _LED_DRIVER_INTERFACE_H
#define _LED_DRIVER_INTERFACE_H

#include<stdio.h>
#include<stdint.h>
#include"../../../../week2/day10/Atmega32RegMap.h"
#include"../../../../week2/day8/bitmath/bitmath.h"

void Led_Init(uint8_t *GroupName , uint8_t *PinNumber );
void Led_on(uint8_t GroupName , uint8_t PinNumber , uint8_t ConnectionType);

#endif