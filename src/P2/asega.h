#pragma once
#include <basic.h>
#include <iostream>

struct VTASEGA {
    struct VT* pvtSuper = g_vtbasic.pvtSuper;
    enum CID cid = CID::ASEGA;
};

extern VTASEGA g_vtasega;