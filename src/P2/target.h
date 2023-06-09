#pragma once
#include <xform.h>
#include <iostream>

struct VTTARGET {
    struct VT* pvtSuper = g_vtxfm.pvtSuper;
    enum CID cid = CID::TARGET;
    int grfcid = 0;
    int cb = 0xA0;
    /*undefined1* pfnInitTarget;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnTargetAdd;
    undefined1* pfnOnTargetRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneTarget;
    undefined1* pfnLoadXfmFromBrx;
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
    undefined1* pfnSetXfmParent;
    undefined1* pfnApplyXfmProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetXfmParams;
    undefined1* pfnUpdateLoLiveEdit;*/
};

extern VTTARGET g_vttarget;