#pragma once
#include <alo.h>
#include <bis.h>
#include <bsp.h>
#include <geom.h>

// SO could mean static object

enum CT
{
    CT_Tangent = 1,
    CT_Free = 0,
    CT_Project = 2,
    CT_Locked = 3
};

struct CONSTR
{
    VECTOR normal;
    CT ct;
};

struct SOP {
    LO* plo;
    int cpar;
    struct PAR* apar;
    SOP* psopNext;
};

struct SO {
    struct ALO SO;
    struct DLE dleRoot;
    struct DL dlPhys;
    struct DLE dlePhys;
    struct MATRIX3 momintLocal;
    struct MATRIX3 momintInvLocal;
    struct VECTOR dvGravity;
    float gBuoyancy;
    float gViscosity;
    float m;
    struct VECTOR posWorldPrev;
    struct GEOM geomLocal;
    struct GEOM geomWorld;
    struct LVO* plvo;
    float sRadiusSelf;
    float sRadiusAll;
    float sRadiusPrune;
    struct VECTOR posPrune;
    struct BSPC bspc;
    int cnpg;
    struct NPG* anpg;
    int* mpibspinpg;
    int chsg;
    struct HSG* ahsg;
    int* mpisurfihsgMic;
    struct DLE dleBusySo;
    struct VECTOR posMin;
    struct VECTOR posMax;
    struct CONSTR constrForce;
    struct CONSTR constrTorque;
    struct OXA* poxa;
    struct VECTOR dpos;
    struct VECTOR drot;
    struct XA* pxa;
    struct XP* pxpInternal;
    int grfpvaXpValid;
    int ipsoRoot;
    int ipso;
    struct VECTOR posComLocal;
    enum ZOK zok;
    struct SO* psoPhysHook;
    struct GEOM geomCameraLocal;
    struct GEOM geomCameraWorld;
    struct BSPC bspcCamera;
    struct STSO* pstso;
};

struct STSO {
    SO* psoTouch;
    STSO* pstsoNext;
};

void InitSo(SO* pso);
void OnSoAdd(SO* pso);
void OnSoRemove(SO* pso);
//void SendSoMessage(SO* pso, MSGID msgid, void* pv);
void LoadSoFromBrx(SO* pso, CBinaryInputStream* pbis);

struct VTSO {
    struct VT* pvtSuper = g_vtalo.pvtSuper;
    CID cid = CID::SO;
    int grfcid = 3;
    int cb = 0x580;
    /*undefined1* pfnInitSo;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneSo;
    undefined1* pfnLoadSoFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostAloLoad;
    undefined1* pfnUpdateSo;
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
    undefined1* pfnProjectSoTransform;
    undefined1* pfnPresetSoAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateSoToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderSoSelf;
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
    undefined1* pfnUpdateSoBounds;
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

extern VTSO g_vtso;