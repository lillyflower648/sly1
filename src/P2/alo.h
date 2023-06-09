#pragma once
#include <act.h>
#include <aseg.h>
#include <pose.h>
#include <frzg.h>
#include <mat.h>
#include <glob.h>
#include <sound.h>

struct MRG {
    struct DLE dle;
    int cpalo;
    struct ALO** apalo;
};

struct THROB {
    enum THROBK throbk;
    struct VECTOR hsvIn;
    struct VECTOR hsvOut;
    float dtInOut;
};

struct FICG {
    byte grficSweep;
    byte agrfic[1];
    byte grficRush;
    byte grficSmash;
    byte grficBomb;
    byte grficShock;
};

struct XF {
    struct MATRIX3 mat;
    struct VECTOR pos;
    struct MATRIX3 matWorld;
    struct VECTOR posWorld;
    struct VECTOR v;
    struct VECTOR w;
    struct VECTOR dv;
    struct VECTOR dw;
};

struct ALO {
    LO ALO;
    DL dlChild;
    DLE dleBusy;
    DLE dleMRD;
    struct ALO* paloRoot;
    struct ALO* paloFreezeRoot;
    DLE dleFreeze;
    DL dlFreeze;
    int cpmrg;
    MRG* apmrg[4];
    float sMRD;
    float sCelBorderMRD;
    int grfzon;
    float dsMRDSnap;
    FRZ frz;
    struct XF xf;
    VECTOR posOrig;
    MATRIX3 matOrig;
    VECTOR eulOrig;
    DL dlAct;
    struct ACT* pactPos;
    struct ACT* pactRot;
    struct ACT* pactScale;
    struct ACT** apactPose;
    struct ACT* pactRestore;
    struct ACTLA* pactla;
    struct ACTBANK* pactbank;
    struct IKH* pikh;
    struct CLQ* pclqPosSpring;
    struct CLQ* pclqPosDamping;
    struct CLQ* pclqRotSpring;
    struct CLQ* pclqRotDamping;
    struct SMPA* psmpaPos;
    struct SMPA* psmpaRot;
    struct ALOX* palox;
    int cframeStatic;
    GLOBSET globset;
    SHADOW* pshadow;
    THROB* pthrob;
    float sFastShadowRadius;
    float sFastShadowDepth;
    int fRealClock;
    FADER* pfader;
    float dtUpdatePause;
    ASEGD* pasegd;
    float sRadiusRenderSelf;
    float sRadiusRenderAll;
    struct SFX* psfx;
    FICG ficg;
    int cposec;
    POSEC* aposec;
    ACTREF* pactrefCombo;
    DLR* pdlrFirst;
    ACK ackRot;
};

void AddAloHierarchy(ALO* palo);
void RemoveAloHierarchy(ALO* palo);
void CloneAloHierarchy(ALO* palo, ALO* paloBase);

struct VTALO {
    struct VT* pvtSuper = g_vtlo.pvtSuper;
    enum CID cid = CID::ALO;
    int grfcid = 1;
    int cb = 0x2E0;
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
    undefined1* pfnLoadAloFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostAloLoad;
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

extern VTALO g_vtalo;