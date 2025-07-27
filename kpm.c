//kpm.c
#include<lpc21xx.h>
#include "kpm_defines.h"
#include "types.h"
#include "lcd.h"
#include "delay.h"
#include "kpm.h"
#include "lcd_defines.h"

u8 kpmLUT[4][4]={{'1','2','3',' '},
                  {'4','5','6','-'},
                  {'7','8','9','/'},
                  {'&','0','^','*'}};
u32  ColScan()
{
	return (((IOPIN1>>COL0)&15)<15) ? 0:1;
}
u32  RowCheck()
{
