#pragma once
#include <lo.h>
#include <iostream>

struct SM {
    LO SM;
    int csms;
    struct SMS* asms;
    int csmt;
    struct SMT* asmt;
    int fDefault;
    DL dlSma;
};

struct SMA {
    struct BASIC SMA;
    struct DLE dleSm;
    struct DLE dleSw;
    struct SM* psm;
    struct ALO* paloRoot;
    int grfapl;
    struct ASEGA* pasegaCur;
    int ismsCur;
    int ismsNext;
    int ismsGoal;
    struct SMT* psmtCur;
    float svtLocal;
    struct MQ* pmqFirst;
};

struct VTSM {
    struct VT* pvtSuper = g_vtlo.pvtSuper;
    enum CID cid = CID::SM;
    int grfcid = 0;
    int cb = 0x60;
    /*undefined1* pfnInitLo;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnLoAdd;
    undefined1* pfnOnLoRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneLo;
    undefined1* pfnLoadSmFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleLoMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindLo;
    undefined1* pfnPostSmLoad;
    undefined1* pfnUpdateLo;
    undefined1* pfnUpdateLoXfWorld;
    undefined1* pfnUpdateLoXfWorldHierarchy;
    undefined1* pfnFreezeLo;
    undefined1* pfnSetLoParent;
    undefined1* pfnApplyLoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetLoParams;
    undefined1* pfnUpdateLoLiveEdit;*/
};

extern VTSM g_vtsm;

struct VTSMA {
    struct VT* pvtSuper = g_vtbasic.pvtSuper;
    enum CID cid = CID::SMA;
};

extern VTSMA g_vtsma;