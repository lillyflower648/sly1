#pragma once
#include <lo.h>
#include <mat.h>
#include <vec.h>

struct FGFN {
    float duFogBias;
    float ruFog;
    float sNearFog;
    float duFogPlusClipBias;
};

// Game camera
struct CM {
    struct LO CM;
    struct VECTOR pos;
    struct VECTOR4 anormalFrustrumTranspose[3];
    struct MATRIX3 mat;
    float  rMRDAdjust;
    struct MATRIX4 matProj;
    struct MATRIX4 matWorldToClip;
    struct MATRIX4 matClipToWorld;
    struct VECTOR anormalFrustrum[4];
    float rMRD;
    float radFOV;
    float rAspect;
    float sNearClip;
    float sFarClip;
    float sRadiusNearClip;
    float xScreenRange;
    float yScreenRange;
    float sNearFog;
    float sFarFog;
    float uFogMax;
    //struct RGBA rgbaFog;
    struct FGFN fgfn;
    float tJolt;
    int grfzon;
    int fCutNext;
    int fCut;
    int fRadCut;
    float radCut;
    int fDisplaced;
    float uPanProgress;
    float uTiltProgress;
    float uSProgress;
    struct VECTOR dposCenter;
    struct VECTOR vCenter;
    struct VECTOR dposAdjust;
    struct VECTOR vAdjust;
    struct VECTOR dposFocus;
    struct VECTOR vFocus;
    struct VECTOR posScreen;
    struct VECTOR vScreen;
    float swPanPos;
    float swTiltPos;
    float sv;
    float swPanMat;
    float swTiltMat;
    struct VECTOR posCenterPrev;
    struct VECTOR posClear;
    struct MATRIX3 matClear;
    struct SO* psoFocusPrev;
    //struct CPDEFI cpdefiPrev;
    int cpaloFade;
    struct ALO* apaloFade[8];
    float tActivateCplcy;
    struct MATRIX3 matRotateToCam;
    struct MATRIX3 matRotateTiltToCam;
    int ccpr;
    /*struct CPR acpr[8];
    struct CPMAN cpman;
    struct CPLOOK cplook;
    struct CPALIGN cpalign;
    struct CPASEG cpaseg;
    struct CPTN cptn;*/
};

struct VTCM {
    struct VT* pvtSuper = g_vtlo.pvtSuper;
    enum CID cid = CID::CM;
    int grfcid = 0;
    int cb = 0x5D0;
    /*undefined1* pfnInitCm;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnLoAdd;
    undefined1* pfnOnLoRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneLo;
    undefined1* pfnLoadLoFromBrx;
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
    undefined1* pfnGetCmParams;
    undefined1* pfnUpdateLoLiveEdit;*/
};

extern VTCM g_vtcm;

static CM g_cm;
extern CM* g_pcm;

void SetupCm(CM* pcm);
