#pragma once
#include <iostream>

struct BSP {
    struct SURF* psurf;
    struct BSP* pbspNeg;
    struct BSP* pbspPos;
};

struct BSPC
{
    int cbsp;
    int cbspFull;
    struct BSP* absp;
};
