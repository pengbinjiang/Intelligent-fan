#include <msp430f169.h>
#include "type.h"
#include "delay.h"

#ifndef ELECTRICAL_H_
#define ELECTRICAL_H_

uchar speed;
uchar bb;
uint    temp,j;

void ele_init();
void timer_B_init();
void choosespeed();

#endif /* ELECTRICAL_H_ */
