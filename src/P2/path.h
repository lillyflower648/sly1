#pragma once
#include <lo.h>
#include <iostream>

struct VTPATHZONE {
    struct VT* pvtSuper = g_vtlo.pvtSuper;
    enum CID cid = CID::PATHZONE;
    int grfcid = 0;
    int cb = 0x70;
    /*undefined1* pfnInitLo;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnPathzoneAdd;
    undefined1* pfnOnPathzoneRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnClonePathzone;
    undefined1* pfnLoadPathzoneFromBrx;
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
    undefined1* pfnSetLoParent;
    undefined1* pfnApplyLoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetLoParams;
    undefined1* pfnUpdateLoLiveEdit;*/
};

extern VTPATHZONE g_vtpathzone;