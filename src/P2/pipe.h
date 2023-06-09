#pragma once
#include <shape.h>
#include <iostream>

struct VTPIPE {
    struct VT* pvtSuper = g_vtshape.pvtSuper;
    enum CID cid = CID::PIPE;
    int grfcid = 0;
    int cb = 0x90;
    /*undefined1* pfnInitPipe;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnPipeAdd;
    undefined1* pfnOnPipeRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnClonePipe;
    undefined1* pfnLoadShapeFromBrx;
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
    undefined1* pfnSetShapeParent;
    undefined1* pfnApplyLoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetLoParams;
    undefined1* pfnUpdateLoLiveEdit;*/
};

extern VTPIPE g_vtpipe;