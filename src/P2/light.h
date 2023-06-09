#pragma once
#include <alo.h>
#include <iostream>

struct LSM
{
	float uShadow;
	float uMidtone;
};

struct LTFN {
    float ruShadow;
    float ruMidtone;
    float ruHighlight;
    float ruUnused;
    float duShadow;
    float duMidtone;
    float duHighlight;
    float duUnused;
};

enum LVK {
    LVK_Nil = -1,
    LVK_Normal = 0,
    LVK_Shadow = 1,
    LVK_Illum = 2,
    LVK_Max = 3
};

struct VTLIGHT {
    struct VT* pvtSuper = g_vtalo.pvtSuper;
    enum CID cid = CID::LIGHT;
    int grfcid = 1;
    int cb = 0x630;
    /*undefined1* pfnInitLight;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnLightAdd;
    undefined1* pfnOnLightRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneLight;
    undefined1* pfnLoadAloFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostAloLoad;
    undefined1* pfnUpdateAlo;
    undefined1* pfnUpdateAloXfWorld;
    undefined1* pfnUpdateLightXfWorldHierarchy;
    undefined1* pfnFreezeAlo;
    undefined1* pfnSetAloParent;
    undefined1* pfnApplyAloProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetLightParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectAloTransform;
    undefined1* pfnPresetAloAccel;
    undefined1* pfnTranslateAloToPos;
    undefined1* pfnRotateAloToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetAloVelocityVec;
    undefined1* pfnSetAloAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderAloSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbAloWkr;*/
};

extern VTLIGHT g_vtlight;