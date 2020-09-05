#include <msp430f169.h>
#include "type.h"
#include "delay.h"

#ifndef LCD12864_H_
#define LCD12864_H_

//彩屏/12864液晶/1602液晶的数据口，三液晶共用
#define DataDIR         P6DIR                     //数据口方向
#define DataPort        P6OUT                     //P4口为数据口

//12864/1602液晶控制管脚
#define RS_CLR          P5OUT &= ~BIT5           //RS置低
#define RS_SET          P5OUT |=  BIT5           //RS置高

#define RW_CLR          P5OUT &= ~BIT6           //RW置低
#define RW_SET          P5OUT |=  BIT6           //RW置高

#define EN_CLR          P5OUT &= ~BIT7           //E置低
#define EN_SET          P5OUT |=  BIT7           //E置高

#define PSB_CLR         P5OUT &= ~BIT0            //PSB置低，串口方式
#define PSB_SET         P5OUT |=  BIT0            //PSB置高，并口方式

//#define RST_CLR         P5OUT &= ~BIT1            //RST置低
//#define RST_SET         P5OUT |= BIT1             //RST置高

#define RST_CLR         P5OUT &= ~BIT3            //RST置低
#define RST_SET         P5OUT |=  BIT3            //RST置高


void LCD_Port_init();
void LCD_write_com(unsigned char);
void LCD_write_data(unsigned char);
void LCD_clear(void);;
void DisplayCgrom(uchar *);
void LCD_write_char(unsigned char,unsigned char,unsigned char);
void LCD_write_str(unsigned char,unsigned char,unsigned char *);
void LCD_init(void);
void LCD_Desk(void);
void lcd_pos(uchar,uchar);

#endif /* LCD12864_H_ */
