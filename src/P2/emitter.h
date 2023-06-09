#pragma once
#include <alo.h>
#include <xform.h>

struct EMITTER {
    struct ALO EMITTER;
    struct EMITB* pemitb;
    enum EMITRK emitrk;
    int cParticle;
    struct LM lmSvcParticle;
    int fCountIsDensity;
    float uPauseProb;
    struct LM lmDtPause;
    float cParticleConstant;
    enum OID oidReference;
    enum OID oidRender;
    enum OID oidTouch;
    enum OID oidNextRender;
    int fAutoPause;
    enum OID oidShape;
    enum OID oidGroup;
    struct DL dlGroup;
    struct DLE dleGroup;
    float svcParticle;
    float dtRecalcSvc;
    float tRecalcSvc;
    float rDensity;
    float sBoxRadius;
    float uParticle;
    float tUnpause;
    struct RIPG* pripg;
    struct BLIPG* pblipg;
    int fValuesChanged;
};

struct EMITDV {
    float rvDamping;
    struct VECTOR dv;
    float swCurl;
    struct VECTOR normalCurl;
    enum EMITCNK emitcnk;
    struct ALO* paloCurlRef;
};

enum EMITCNK {
    EMITCNK_Nil = -1,
    World = 0,
    Local = 1,
    EMITCNK_Max = 2
};

struct VTEMITTER {
    struct VT* pvtSuper = g_vtalo.pvtSuper;
    enum CID cid = CID::EMITTER;
    int grfcid = 1;
    int cb = 0x360;
    /*undefined1* pfnInitEmitter;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnAloAdd;
    undefined1* pfnOnAloRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneEmitter;
    undefined1* pfnLoadEmitterFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleEmitterMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindEmitter;
    undefined1* pfnPostEmitterLoad;
    undefined1* pfnUpdateEmitter;
    undefined1* pfnUpdateAloXfWorld;
    undefined1* pfnUpdateAloXfWorldHierarchy;
    undefined1* pfnFreezeAlo;
    undefined1* pfnSetAloParent;
    undefined1* pfnApplyAloProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetEmitterParams;
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
    undefined1* pfnRenderEmitterSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbAloWkr;*/
};

extern VTEMITTER g_vtemitter;

struct VTEXPL {
    struct VT* pvtSuper = g_vtxfm.pvtSuper;
    enum CID cid = CID::EXPL;
    int grfcid = 0;
    int cb = 0x90;
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
    undefined1* pfnPostExplLoad;
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
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnExplodeExplExplso;*/
};

extern VTEXPL g_vtexpl;

struct VTEXPLG {
    struct VT* pvtSuper = g_vtexpl.pvtSuper;
    enum CID cid = CID::EXPLG;
    int grfcid = 0;
    int cb = 0xC0;
    /*undefined1* pfnInitXfm;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnLoAdd;
    undefined1* pfnOnLoRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneExplg;
    undefined1* pfnLoadExplgFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleLoMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindExplg;
    undefined1* pfnPostExplLoad;
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
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnExplodeExplgExplso;*/
};

extern VTEXPLG g_vtexplg;

struct VTEXPLO {
    struct VT* pvtSuper = g_vtexplg.pvtSuper;
    enum CID cid = CID::EXPLO;
    int grfcid = 0;
    int cb = 0xA0;
    /*undefined1* pfnInitExplo;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnLoAdd;
    undefined1* pfnOnLoRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneExplo;
    undefined1* pfnLoadExploFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleLoMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindExplo;
    undefined1* pfnPostExplLoad;
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
    undefined1* pfnGetExploParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnExplodeExploExplso;*/
};

extern VTEXPLO g_vtexplo;

struct VTEXPLS {
    struct VT* pvtSuper = g_vtexplo.pvtSuper;
    enum CID cid = CID::EXPLS;
    int grfcid = 0;
    int cb = 0xD0;
    /*undefined1* pfnInitExpls;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnLoAdd;
    undefined1* pfnOnLoRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneExplo;
    undefined1* pfnLoadExploFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleExplsMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindExpls;
    undefined1* pfnPostExplLoad;
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
    undefined1* pfnGetExplsParams;
    undefined1* pfnUpdateExplsLiveEdit;
    undefined1* pfnExplodeExplsExplso;*/
};

extern VTEXPLS g_vtexpls;