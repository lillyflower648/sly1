#pragma once
#include <font.h>
//#include <light.h>
#include <iostream>

struct GLOBSET {
    int cbnd;
    struct BND* abnd;
    enum OID* mpibndoid;
    int cglob;
    struct GLOB* aglob;
    struct GLOBI* aglobi;
    //struct LTFN ltfn;
    uint32_t grfglobset;
    struct RGBA rgbaCel;
    int cpose;
    float* agPoses;
    float* agPosesOrig;
    struct WRBG* pwrbgFirst;
    int cpsaa;
    struct SAA** apsaa;
};