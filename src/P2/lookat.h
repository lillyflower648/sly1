#pragma once
#include <act.h>
#include <ref.h>
#include <vec.h>
#include <util.h>

struct ACTLA {
    struct ACT ACTLA;
    int fUseTarget;
    struct ALO* paloTarget;
    struct VECTOR posTargetLocal;
    float sIgnore;
    int nPriorityEnabled;
    int nPriorityDisabled;
    int fPaused;
    struct CLQ clqPanToPan;
    struct LM lmPan;
    struct CLQ clqTiltToTilt;
    struct LM lmTilt;
};