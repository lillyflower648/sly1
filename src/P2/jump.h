#pragma once
#include <pnt.h>
#include <iostream>

struct VTJMT {
    struct VT* pvtSuper = g_vtpnt.pvtSuper;
    enum CID cid = CID::JMT;
    int grfcid = 0;
    int cb = 0x70;
    /*undefined1* pfnInitLo;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnJmtAdd;
    undefined1* pfnOnJmtRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneJmt;
    undefined1* pfnLoadPntFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleLoMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindLo;
    undefined1* pfnPostJmtLoad;
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

extern VTJMT g_vtjmt;