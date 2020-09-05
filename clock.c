#include "clock.h"

void init_clk(){
    uchar i;
    BCSCTL1 &=~ XT2OFF;
    //BCSCTL2 |= DIVS0 + DIVS1;
    BCSCTL2|=SELM1 + SELS;                 //MCLKΪ32.768KHZ��SMCLKΪ8MHZ
    do{
        IFG1 &=~ OFIFG;                   //������������־
        for(i=0;i<100;i++)
           _NOP();
    }
    while((IFG1&OFIFG)!=0);           //�����־λ1�������ѭ���ȴ�
    IFG1&=~OFIFG;
}
//��ʼ��ʱ��
void init_clk_1M()
{
    unsigned char i;
    BCSCTL1 &= ~XT2OFF;
    BCSCTL2 |= DIVS0 + DIVS1;
    BCSCTL2 |= SELM_2 + SELS;
    do
    {
        IFG1 &= ~OFIFG;
        for(i = 0; i < 100; i++)
        {
            _NOP();
        }
    }
    while((IFG1&OFIFG) != 0);
    IFG1 &= ~OFIFG;

}