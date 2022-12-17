/******************************************************************
  tool.cpp
                                                    қuran nov 2022
******************************************************************/
#include "tool.h"
#include <avr/io.h>

int toolFunc(void)
{
    DDRB = 0xff; 
    PORTB = 0xff; 
    return 0;
}
