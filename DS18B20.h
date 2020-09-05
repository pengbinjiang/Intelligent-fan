#include <msp430f169.h>
#include "type.h"
#include "delay.h"

#ifndef DS18B20_H_
#define DS18B20_H_

uchar   A1,A2,A3;                     //定义的变量,显示数据处理
uchar   Temp_Value[6];                     //显示用的温度数据，分离用放入数组准备调用
uint    temp_value;

//DS18B20控制脚，单脚控制
#define DQ_IN           P1DIR &= ~BIT7        //设置输入，DS18B20接单片机P53口
#define DQ_OUT          P1DIR |= BIT7         //设置输出
#define DQ_CLR          P1OUT &= ~BIT7            //置低电平
#define DQ_SET          P1OUT |= BIT7             //置高电平
#define DQ_R            P1IN & BIT7       //读电平

unsigned char DS18B20_Reset(void);
unsigned char ds1820_read_byte(void);
void ds1820_write_byte(unsigned char);
void ds1820_start(void);
unsigned int ds1820_read_temp(void);
void data_do(uint);

#endif /* DS18B20_H_ */
