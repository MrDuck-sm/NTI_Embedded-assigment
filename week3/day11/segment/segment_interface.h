#ifndef _SEGMENT_INTERFACE_H
#define _SEGMENT_INTERFACE_H
#include<stdio.h>
#include<stdint.h>
#include"../../../../week3/day11/7segmant/seven_sigment.h"
#include"segment_private.h"
#include"../../../../week2/day10/Atmega32RegMap.h"
#include <util/delay.h>
#include"../../../../week2/day8/bitmath/bitmath.h"


void Segment_Init(uint8_t *GroupName);
void DisplayNumber(uint8_t *GroupName, uint8_t *Number);
void DisplayRang(uint8_t *GroupName,uint8_t Start , uint8_t End );

//this one is like this
#endif