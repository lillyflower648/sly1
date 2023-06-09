#pragma once
#include <alarm.h>
#include <emitter.h>
#include <game.h>
#include <so.h>
#include <util.h>
#include <iostream>

struct SENSOR {
    SO SENSOR;
    struct ALARM* palarm;
    enum SENSM sensm;
    enum SENSORS sensors;
    float tSensors;
    enum SENSORS sensorsInitial;
    int coidTrigger;
    enum OID aoidTrigger[4];
    int coidNoTrigger;
    enum OID aoidNoTrigger[4];
    int ccidTrigger;
    enum CID acidTrigger[4];
    int ccidNoTrigger;
    enum CID acidNoTrigger[4];
    int fTriggerAll;
    float dtEnabling;
    float dtDisabling;
    int fRemainDisabledIndefinite;
    struct AMB* pamb;
    struct ASEGA* pasegaPause;
    float svtRestore;
};

enum SENSM
{
    SENSM_Nil = -1,
    SENSM_SenseOnly = 0,
    SENSM_DamageTarget = 1,
    SENSM_Max = 2
};

enum SENSORS 
{
    SENSORS_Nil = -1,
    SenseEnabling = 0,
    SenseEnabled = 1,
    SenseTriggered = 2,
    SenseDisabling = 3,
    DamageEnabling = 4,
    DamageEnabled = 5,
    DamageTriggered = 6,
    DamageDisabling = 7,
    Disabled = 8,
    SENSORS_Max = 9
};

struct CAMSEN {
    SENSOR CAMSEN;
    struct ALO* paloRenderDamage;
    struct ALO* paloRenderZap;
    enum CSDTS csdts;
    float tCsdts;
    float dtDamageFocus;
    float dtDamageZap;
    float dtDamageUnfocus;
};

struct PRSEN {
    struct SENSOR PRSEN;
    int iframeSenseStart;
    int iframeSenseEnd;
    float dtSenseAnim;
    enum PSSAT pssatSense;
    int iframeDamageStart;
    int iframeDamageEnd;
    float dtDamageAnim;
    enum PSSAT pssatDamage;
    int iframeDisabledStart;
    int iframeDisabledEnd;
    float dtDisabledAnim;
    enum PSSAT pssatDisabled;
    int iframeDisablingFlash;
    float svtDisablingFlash;
    float dtRemainEnabled;
    float dtRemainDisabled;
    struct LOOP* ploop;
    float tSensePrev;
    int fTriggered;
};

struct LEMIT {
    struct EMITTER* pemitter;
    int fScorch;
};

struct LBEAM {
    struct SHAPE* pshape;
    float sShape;
    float sShapeLast;
    struct SO* psoHit;
    struct VECTOR posHit;
    int iposHit;
    int clemitDamage;
    struct LEMIT alemitDamage[4];
};

struct LASEN {
    struct SENSOR LASEN;
    enum LASK lask;
    int clbeam;
    struct LBEAM albeam[16];
    int cposBeamShapeMax;
    struct ALO* paloRenderSense;
    struct ALO* paloRenderDamage;
    float dtDamageDisabling;
    struct DLE dleBusyLasen;
    int fBusyLasen;
    float tSenseNext;
    int fJtOnlyTriggerObject;
    float uDrawMax;
    float svuDrawMax;
};

struct VTSENSOR {
    struct VT* pvtSuper = g_vtso.pvtSuper;
    enum CID cid = CID::SENSOR;
    int grfcid = 3;
    int cb = 0x600;
    /*undefined1* pfnInitSensor;
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
    undefined1* pfnUpdateSensor;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetSensorParams;
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
    undefined1* pfnFInflictSoZap;
    undefined1* pfnSenseSensor;
    undefined1* pfnEnableSensor;
    undefined1* pfnDisableSensor;
    undefined1* pfnOnSensorAlarmTriggered;
    undefined1* pfnSetSensorAlarm;
    undefined1* pfnSetSensorSensors;*/
};

extern VTSENSOR g_vtsensor;

struct VTLASEN {
    struct VT* pvtSuper = g_vtsensor.pvtSuper;
    enum CID cid = CID::LASEN;
    int grfcid = 3;
    int cb = 0xB40;
    /*undefined1* pfnInitLasen;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneSo;
    undefined1* pfnLoadLasenFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindLasen;
    undefined1* pfnPostLasenLoad;
    undefined1* pfnUpdateLasen;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeLasen;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetLasenParams;
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
    undefined1* pfnRenderLasenSelf;
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
    undefined1* pfnFInflictSoZap;
    undefined1* pfnSenseLasen;
    undefined1* pfnEnableLasen;
    undefined1* pfnDisableLasen;
    undefined1* pfnOnLasenAlarmTriggered;
    undefined1* pfnSetSensorAlarm;
    undefined1* pfnSetLasenSensors;*/
};

extern VTLASEN g_vtlasen;

struct VTCAMSEN {
    struct VT* pvtSuper = g_vtsensor.pvtSuper;
    enum CID cid = CID::CAMSEN;
    int grfcid = 3;
    int cb = 0x620;
    /*undefined1* pfnInitCamsen;
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
    undefined1* pfnPostCamsenLoad;
    undefined1* pfnUpdateCamsen;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetCamsenParams;
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
    undefined1* pfnRenderCamsenSelf;
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
    undefined1* pfnFIgnoreCamsenIntersection;
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
    undefined1* pfnFInflictSoZap;
    undefined1* pfnSenseCamsen;
    undefined1* pfnEnableCamsen;
    undefined1* pfnDisableCamsen;
    undefined1* pfnOnCamsenAlarmTriggered;
    undefined1* pfnSetSensorAlarm;
    undefined1* pfnSetCamsenSensors;*/
};

extern VTCAMSEN g_vtcamsen;

struct VTPRSEN {
    struct VT* pvtSuper = g_vtsensor.pvtSuper;
    enum CID cid = CID::PRSEN;
    int grfcid = 3;
    int cb = 0x650;
    /*undefined1* pfnInitPrsen;
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
    undefined1* pfnPostPrsenLoad;
    undefined1* pfnUpdatePrsen;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetPrsenParams;
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
    undefined1* pfnFInflictSoZap;
    undefined1* pfnSensePrsen;
    undefined1* pfnEnablePrsen;
    undefined1* pfnDisablePrsen;
    undefined1* pfnOnPrsenAlarmTriggered;
    undefined1* pfnSetSensorAlarm;
    undefined1* pfnSetPrsenSensors;*/
};

extern VTPRSEN g_vtprsen;

void InitSensor(SENSOR* psensor);
void GetSensorParams(SENSOR* psensor, SOP** ppsop);
void SetSensorAlarm(SENSOR* psensor, ALARM* palarm);
void SetSensorSensors(SENSOR* psensor, SENSORS sensors);
int  FCheckSensorObject(SENSOR* psensor, SO* psoOther);
int  FIgnoreSensorObject(SENSOR* psensor, SO* psoOther);
int  FOnlySensorTriggerObject(SENSOR* psensor, SO* psoOther);
void PauseSensor(SENSOR* psensor);
void UpdateSensor(SENSOR* psensor, float dt);
void AddSensorTriggerObject(SENSOR* psensor, OID oid);
void AddSensorNoTriggerObject(SENSOR* psensor, OID oid);
void AddSensorTriggerClass(SENSOR* psensor, CID cid);
void AddSensorNoTriggerClass(SENSOR* psensor, CID cid);
void SenseLasen(LASEN* plasen, SENSORS* psensors);
void SetLasenSensors(LASEN* plasen, SENSORS sensors);
void SenseCamsen(CAMSEN* pcamsen, SENSORS* psensors);
void SetCamsenSensors(CAMSEN* pcamsen, SENSORS sensors);
void SensePrsen(PRSEN* pprsen, SENSORS* psensors);
void SetPrsenSensors(PRSEN* pprsen, SENSORS sensors);