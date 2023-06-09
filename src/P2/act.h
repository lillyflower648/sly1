#pragma once
#include <dl.h>

struct ACT {
    struct VTACT* pvtact;
    struct VTACTVAL* pvtactval;
    struct VTACTREF* pvtactref;
    struct VTACTADJ* pvtactadj;
    struct VTACTBANK* pvtactbank;
    struct VTACTSEG* pvtactseg;
    struct VTACTLA* pvtactla;
    struct VTACTADD* pvtactadd;
    struct ALO* palo;
    struct DLE dleAlo;
    int nPriority;
    float tMatch;
};

struct ACTREF {
    struct ACT ACTREF;
    struct VECTOR* pposGoal;
    struct VECTOR* pvGoal;
    struct MATRIX3* pmatGoal;
    struct VECTOR* pwGoal;
    float* pradTwistGoal;
    float* pdradTwistGoal;
    struct MATRIX3* pmatScale;
    int* pcgPoses;
    float* agPoses;
};

enum ACK {
    ACK_Nil = -1,
    ACK_None = 0,
    ACK_Spring = 1,
    ACK_Velocity = 2,
    ACK_Smooth = 3,
    ACK_Spline = 4,
    ACK_Drive = 5,
    ACK_SmoothForce = 6,
    ACK_SmoothLock = 7,
    ACK_SpringLock = 8,
    ACK_SmoothNoLock = 9,
    ACK_Max = 10
};