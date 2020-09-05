#include "electrical.h"
#include "lcd12864.h"

#pragma vector = TIMERB0_VECTOR
__interrupt void Timer_B(void)
{
    bb++;
    if(bb == 800)
    {
        bb = 0;
    }
}

void ele_init(){
    P4DIR |= 0x0c;
    P4SEL |= 0x0c;
}

void timer_B_init(){
    TBCCR0 = 10000;
    TBCTL = CNTL_0 + TASSEL_2 + MC_1;
}

void choosespeed()
{
    if(speed == 0)
    {
        TBCCR0 = 10000;
        TBCCTL0 = CCIE;
        TBCCTL2 = OUTMOD_2;
        TBCCR2 = 0;
        TBCCTL3 = OUTMOD_7;
        TBCCR3 = 0;
        lcd_pos(2,0);
        if(j == 0)
        {
            lcd_pos(1,6);
            DisplayCgrom("手动");
            lcd_pos(2,6);
            DisplayCgrom("零档");
        }
        if(j == 1)
        {
            lcd_pos(1,6);
            DisplayCgrom("自动");
            lcd_pos(2,6);
            DisplayCgrom("零档");
        }
    }
    if(speed == 1)
    {
        TBCCR0 = 10000;
        TBCCTL0 = CCIE;
        TBCCTL2 = OUTMOD_2;
        TBCCR2 = 2000;
        TBCCTL3 = OUTMOD_7;
        TBCCR3 = 2000;
        lcd_pos(2,0);
        if(j == 1)
        {
             lcd_pos(1,6);
             DisplayCgrom("自动");
             lcd_pos(2,6);
             DisplayCgrom("一档");
        }
    }
    if(speed == 2)
    {
        TBCCR0 = 10000;
        TBCCTL0 = CCIE;
        TBCCTL2 = OUTMOD_2;
        TBCCR2 = 5000;
        TBCCTL3 = OUTMOD_7;
        TBCCR3 = 5000;
        lcd_pos(2,0);

        if(j == 1)
        {
            lcd_pos(1,6);
            DisplayCgrom("自动");
            lcd_pos(2,6);
            DisplayCgrom("二档");
        }
    }
    if(speed == 3)
    {
        TBCCR0 = 10000;
        TBCCTL0 = CCIE;
        TBCCTL2 = OUTMOD_2;
        TBCCR2 = 6500;
        TBCCTL3 = OUTMOD_7;
        TBCCR3 = 6500;
        lcd_pos(2,0);
        if(j == 0)
        {
            lcd_pos(1,6);
            DisplayCgrom("手动");
            lcd_pos(2,6);
            DisplayCgrom("一档");
        }
        if(j == 1)
        {
            lcd_pos(1,6);
            DisplayCgrom("自动");
            lcd_pos(2,6);
            DisplayCgrom("三档");
        }
    }

    if(speed == 4)
    {
        TBCCR0 = 10000;
        TBCCTL0 = CCIE;
        TBCCTL2 = OUTMOD_2;
        TBCCR2 = 8000;
        TBCCTL3 = OUTMOD_7;
        TBCCR3 = 8000;
        lcd_pos(2,0);
        if(j == 0)
        {
            lcd_pos(1,6);
            DisplayCgrom("手动");
            lcd_pos(2,6);
            DisplayCgrom("二档");
        }
        if(j == 1)
        {
            lcd_pos(1,6);
            DisplayCgrom("自动");
            lcd_pos(2,6);
            DisplayCgrom("四档");
        }
    }
    if(speed == 5)
    {
        TBCCR0 = 10000;
        TBCCTL0 = CCIE;
        TBCCTL2 = OUTMOD_2;
        TBCCR2 = 9500;
        TBCCTL3 = OUTMOD_7;
        TBCCR3 = 9500;
        lcd_pos(2,0);
        if(j == 0)
        {
            lcd_pos(1,6);
            DisplayCgrom("手动");
            lcd_pos(2,6);
            DisplayCgrom("三档");
        }
        if(j == 1)
        {
            lcd_pos(1,6);
            DisplayCgrom("自动");
            lcd_pos(2,6);
            DisplayCgrom("五档");
        }
    }
    if(speed == 6)
    {
        TBCCR0 = 10000;
        TBCCTL0 = CCIE;
        TBCCTL2 = OUTMOD_2;
        TBCCR2 = 9900;
        TBCCTL3 = OUTMOD_7;
        TBCCR3 = 9900;
        lcd_pos(2,0);
        if(j == 1)
        {
            lcd_pos(1,6);
            DisplayCgrom("自动");
            lcd_pos(2,6);
            DisplayCgrom("六档");
        }
    }
}
