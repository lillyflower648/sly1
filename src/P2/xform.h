#pragma once
#include <wipe.h>

/* EXIT State */
enum class EXITS : int
{
	Blocked = 0x0,
	Unblocked = 0x1,
	Disabled = 0x2,
	Enabled = 0x3,
	Totals = 0x4,
	Exiting = 0x5,
	Max = 0x6
};

/* Warps placed in the world to move from one level to another */
struct EXIT {
    struct ALO EXIT;
    int fDefault;
    int fKeyed;
    int fFollowDefault;
    int fTotals;
    enum EXITS exits;
    float tExits;
    int ctsurf;
    //struct TSURF* atsurf;
    int ctbsp;
    //struct TBSP* atbsp;
    enum WID widWarp;
    enum OID oidWarp;
    enum EDK edkAlt;
    enum WID widAlt;
    enum OID oidAlt;
    int cpaseg;
    struct ASEG** apaseg;
    enum WIPEK wipek;
    float tWipe;
    float dtUnblock;
    float dtTriggerWipe;
};

struct VTCAMERA {
    struct VT* pvtSuper = g_vtalo.pvtSuper;
    enum CID cid = CID::CAMERA;
    int grfcid = 1;
    int cb = 0x330;
    /*undefined1* pfnInitCamera;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnAloAdd;
    undefined1* pfnOnAloRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneAlo;
    undefined1* pfnLoadAloFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostCameraLoad;
    undefined1* pfnUpdateAlo;
    undefined1* pfnUpdateAloXfWorld;
    undefined1* pfnUpdateAloXfWorldHierarchy;
    undefined1* pfnFreezeAlo;
    undefined1* pfnSetAloParent;
    undefined1* pfnApplyAloProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetAloParams;
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

extern VTCAMERA g_vtcamera;

struct VTXFM {
    struct VT* pvtSuper = g_vtlo.pvtSuper;
    enum CID cid = CID::XFM;
    int grfcid = 0;
    int cb = 0x80;
    /*undefined1* pfnInitXfm;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnLoAdd;
    undefined1* pfnOnLoRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneLo;
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

extern VTXFM g_vtxfm;

struct VTWARP {
    struct VT* pvtSuper = g_vtxfm.pvtSuper;
    enum CID cid = CID::WARP;
    int grfcid = 0;
    int cb = 0x120;
    /*undefined1* pfnInitXfm;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnLoAdd;
    undefined1* pfnOnLoRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneWarp;
    undefined1* pfnLoadWarpFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleLoMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindLo;
    undefined1* pfnPostWarpLoad;
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
    undefined1* pfnGetWarpParams;
    undefined1* pfnUpdateLoLiveEdit;*/
};

extern VTWARP g_vtwarp;

struct VTEXIT {
    struct VT* pvtSuper = g_vtalo.pvtSuper;
    enum CID cid = CID::EXIT;
    int grfcid = 1;
    int cb = 0x340;
    /*undefined1* pfnInitAlo;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnAloAdd;
    undefined1* pfnOnAloRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneAlo;
    undefined1* pfnLoadExitFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostExitLoad;
    undefined1* pfnUpdateExit;
    undefined1* pfnUpdateAloXfWorld;
    undefined1* pfnUpdateAloXfWorldHierarchy;
    undefined1* pfnFreezeAlo;
    undefined1* pfnSetAloParent;
    undefined1* pfnApplyAloProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetExitParams;
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

extern VTEXIT g_vtexit;

void SetExitExits(EXIT* pexit, EXITS exits);
