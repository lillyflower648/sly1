#pragma once
#include <break.h>
#include <clock.h>
#include <dl.h>
#include <brx.h>
#include <sm.h>
#include <so.h>
#include <sound.h>
#include <sw.h>
#include <sensor.h>

enum ALARMS {
    ALARMS_Nil = -1,
    ALARMS_Enabled = 0,
    ALARMS_Disabled = 1,
    ALARMS_Triggered = 2,
    ALARMS_Max = 3
};

enum ALTK {
    ALTK_Nil = -1,
    ALTK_Trigger = 0,
    ALTK_Untrigger = 1,
    ALTK_Disable = 2,
    ALTK_Max = 3
};

struct ALARM {
    SO ALARM;
    ALARMS alarms;
    float tAlarms;
    SM* psm;
    SMA* psma;
    float dtReset;
    int calbrks;
    OID aoidAlbrks[4];
    int coidSensors;
    OID aoidSensors[16];
    int cpsensors; // Number of sensors for alarm.
    //SENSOR* apsensors[16];
    int coidStepguards;
    OID aoidStepguards[6];
    int calbrksDisabled;
    AMB* pambSiren;
    EXC* pexc;
    int fSilent;
    int crsmg;
    //struct RSMG arsmg[8];
    int ichkDisabled;
};

struct ALBRK {
    BREAK ALBRK;
    ALARM* palarm;
};

struct VTALBRK {
    struct VT* pvtSuper = g_vtbreak.pvtSuper;
    enum CID cid = CID::ALBRK;
    int grfcid = 19;
    int cb = 0x6F0;
    /*undefined1* pfnInitBreak;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneBrk;
    undefined1* pfnLoadBrkFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostBrkLoad;
    undefined1* pfnUpdateBrk;
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
    undefined1* pfnFAbsorbBrkWkr;
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
    undefined1* pfnBreakAlbrk;*/
};

extern VTALBRK g_vtalbrk;

struct VTALARM {
    struct VT* pvtSuper = g_vtso.pvtSuper;
    enum CID cid = CID::ALARM;
    int grfcid = 3;
    int cb = 0x6F0;
    /*undefined1* pfnInitAlarm;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneAlarm;
    undefined1* pfnLoadSoFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostAlarmLoad;
    undefined1* pfnUpdateAlarm;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetAlarmParams;
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

extern VTALARM g_vtalarm;

void BreakAlbrk(ALBRK* palbrk);
void SetAlbrkAlarm(ALBRK* palbrk, ALARM* palarm);
void InitAlarm(ALARM* palarm);
void PostAlarmLoad(ALARM* palarm);
void CloneAlarm(ALARM* palarm, ALARM* palarmBase);
void UpdateAlarm(ALARM* plarm, float dt);
void GetAlarmParams(ALARM* palrm, SOP** ppsop);
//void PostAlarmLoadCallbackHookup(ALARM* palarm, MSGID msgid, void* pv);
void SetAlarmAlarms(ALARM* palarm, ALARMS alarms);
void TriggerAlarm(ALARM* palrm, ALTK altk);
void DisableAlarmAlbrk(ALARM* palarm);
void EnableAlarmSensors(ALARM* palarm);
void DisableAlarmSensors(ALARM* palarm);
void NotifyAlarmSensorsOnTrigger(ALARM* palarm);
void AddAlarmAlbrk(ALARM* palarm, OID oid);
void AddAlarmSensor(ALARM* palarm, OID oid);
void AddAlarmStepguard(ALARM* palarm, OID oid);
void SetAlarmRsmg(ALARM* palarm, int fOnTrigger, OID oidRoot, OID oidSM, OID oidGoal);
int  FGetAlarmSensorList(ALARM* palarm, void* pvstate);