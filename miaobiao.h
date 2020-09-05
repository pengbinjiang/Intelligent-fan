#ifndef MIAOBIAO_H_
#define MIAOBIAO_H_

#include <msp430f169.h>
#include "delay.h"
#include "type.h"


char flag;
uchar sec,min,hour,year,month,day;
uchar sec1,min1,hour1;
uchar cflag;
uchar PP;

void xianshi();
void stopwatch();
void timer_A_init();
void init_port1();

#endif /* MIAOBIAO_H_ */
