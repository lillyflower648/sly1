#pragma once
#include <pnt.h>
#include <iostream>

struct VTSPIRE {
    struct VT* pvtSuper = g_vtpnt.pvtSuper;
    enum CID cid = CID::SPIRE;
    int grfcid = 0;
    int cb = 0x60;
    /*undefined1* pfnInitLo;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnSpireAdd;
    undefined1* pfnOnSpireRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneSpire;
    undefined1* pfnLoadPntFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleLoMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindLo;
    undefined1* pfnPostLoLoad;
    undefined1* pfnUpdateLo;
    undefined1* pfnUpdateLoXfWorld;
    undefined1* pfnUpdateLoXfWorldHierarchy;
    undefined1* pfnFreezeLo;
    undefined1* pfnSetPntParent;
    undefined1* pfnApplyPntProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetLoParams;
    undefined1* pfnUpdateLoLiveEdit;*/
};

extern VTSPIRE g_vtspire;