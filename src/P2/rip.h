#pragma once
#include <so.h>

struct RIPG {
    struct SO *RIPG;
    enum RIPGT ripgt;
    float sExpand;
    struct DL dlRip;
    struct RIPG* pripgNext;
};

struct RIP {
    struct VTRIP* pvtrip;
    struct VTDROPLET* pvtdroplet;
    struct VTBUBLET* pvtbublet;
    struct VTRIPPLE* pvtripple;
    struct VTPUFF* pvtpuff;
    struct VTDABLET* pvtdablet;
    struct VTFLAKE* pvtflake;
    struct VTSPARK* pvtspark;
    struct VTBURST* pvtburst;
    struct VTTRAIL* pvttrail;
    struct VTFIREBALL* pvtfireball;
    struct VTSMOKECLOUD* pvtsmokecloud;
    struct VTSMOKETRAIL* pvtsmoketrail;
    struct VTDEBRIS* pvtdebris;
    struct VTORBIT* pvtorbit;
    struct VTSMACK* pvtsmack;
    struct VTRAY* pvtray;
    struct VTROSE* pvtrose;
    struct VTFLYING* pvtflying;
    struct VTSTUCK* pvtstuck;
    struct VTLEAF* pvtleaf;
    struct VTFLAME* pvtflame;
    struct VTBULLET* pvtbullet;
    struct VTSHRAPNEL* pvtshrapnel;
    struct VTGLINT* pvtglint;
    struct VTMATCH* pvtmatch;
    struct VTREMIT* pvtremit;
    enum RIPT ript;
    int cref;
    struct RIPG* pripg;
    struct DLE dle;
    float tCreated;
    float dtLifetime;
    struct ALO* paloRender;
    struct SO* psoTouch;
    struct CLQ clqScale;
    struct CLQ clqAlpha;
    struct MATRIX3 mat;
    struct VECTOR pos;
    struct VECTOR posPrev;
    struct VECTOR v;
    //struct EMITDV emitdv;
    struct VECTOR w;
    float rwDamping;
    struct WR* pwr;
    struct MQ* pmqFirst;
};

enum RIPT {
    RIPT_Nil = -1,
    RIPT_Rip = 0,
    RIPT_Shadow = 1,
    RIPT_Droplet = 2,
    RIPT_Bublet = 3,
    RIPT_Ripple = 4,
    RIPT_Puff = 5,
    RIPT_Dablet = 6,
    RIPT_Flake = 7,
    RIPT_Spark = 8,
    RIPT_Burst = 9,
    RIPT_Trail = 10,
    RIPT_Fireball = 11,
    RIPT_SmokeCloud = 12,
    RIPT_SmokeTrail = 13,
    RIPT_Debris = 14,
    RIPT_Orbit = 15,
    RIPT_Smack = 16,
    RIPT_Ray = 17,
    RIPT_Rose = 18,
    RIPT_Flying = 19,
    RIPT_Stuck = 20,
    RIPT_Leaf = 21,
    RIPT_Flame = 22,
    RIPT_Bullet = 23,
    RIPT_Shrapnel = 24,
    RIPT_Glint = 25,
    RIPT_Match = 26,
    RIPT_Emitter = 27,
    RIPT_Max = 28
};

enum RIPGT {
    RIPGT_Nil = -1,
    RIPGT_Default = 0,
    RIPGT_Bounce = 1,
    RIPGT_Loot = 2,
    RIPGT_Max = 3
};

struct VTRIPG {
    struct VT* pvtSuper = g_vtso.pvtSuper;
    enum CID cid = CID::RIPG;
    int grfcid = 3;
    int cb = 0x5A0;
    /*undefined1* pfnInitRipg;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnRipgRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneSo;
    undefined1* pfnLoadSoFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostAloLoad;
    undefined1* pfnUpdateRipg;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetSoParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectRipgTransform;
    undefined1* pfnPresetSoAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateSoToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderRipgSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbSoWkr;
    undefined1* pfnDisplaceSo;
    undefined1* pfnImpactSo;
    undefined1* pfnPivotSo;
    undefined1* pfnUpdateRipgBounds;
    undefined1* pfnAddSoExternalAccelerations;
    undefined1* pfnCloneSoPhys;
    undefined1* pfnRenumberSo;
    undefined1* pfnPropagateSoForce;
    undefined1* pfnDistributeSoEffects;
    undefined1* pfnFIgnoreSoIntersection;
    undefined1* pfnAddSoXps;
    undefined1* pfnAddSoCustomXps;
    undefined1* pfnAdjustSoXpLocal;
    undefined1* pfnAdjustSoNewXp;
    undefined1* pfnAdjustSoXpVelocity;
    undefined1* pfnAdjustSoDz;
    undefined1* pfnAdjustSoXps;
    undefined1* pfnUpdateSoInternalXps;
    undefined1* pfnNotifySoImpact;
    undefined1* pfnUpdateSoPivots;
    undefined1* pfnUpdateSoImpacts;
    undefined1* pfnUpdateSoPosWorldPrev;
    undefined1* pfnGetSoCpdefi;
    undefined1* pfnAddSoWaterAcceleration;
    undefined1* pfnFInflictSoZap;*/
};

extern VTRIPG g_vtripg;