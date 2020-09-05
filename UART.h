#include<msp430f169.h>
#include"type.h"
#include"delay.h"

#ifndef UART_H_
#define UART_H_

uchar keyvalue;

//串口波特率计算，当BRCLK=CPU_F时用下面的公式可以计算，否则要根据设置加入分频系数
#define baud           9600                                //设置波特率的大小
#define baud_setting   (uint)((ulong)CPU_F1/((ulong)baud))  //波特率计算公式
#define baud_h         (uchar)(baud_setting>>8)            //提取高位
#define baud_l         (uchar)(baud_setting)               //低位

uchar keyvalue;

void UART_Init();
void Send_Byte(uchar data);

#endif /* UART_H_ */
