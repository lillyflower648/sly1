#pragma once
#include <alo.h>
#include <game.h>
#include <util.h>
#include <iostream>

typedef unsigned char byte;

enum class DIALOGK
{
    Binoc = 0,
    Instruct = 1,
    Confront = 2,
    Max = 3,
};

enum class DIALOGS
{
    Enabled = 0,
    Triggered = 1,
    Disabled = 2,
    Playing = 3,
    Calling = 4,
    UnableToCall = 5,
    Max = 6,
};

struct DIALOG {
    struct ALO DIALOG;
    enum DIALOGK dialogk;
    enum DIALOGS dialogs;
    float tDialogs;
    int cde;
    struct DE* ade;
    int ideCur;
    //struct DP dp;
    enum OID oidPntAnchor;
    int* pfPlayed;
    int fPlayed;
    int cpfEquivalence;
    int* apfEquivalence[4];
    int fDefault;
    int fCrucial;
};

static DIALOG* g_pdialogCalling;

struct VTDIALOG {
    struct VT* pvtSuper = g_vtalo.pvtSuper;
    enum CID cid = CID::DIALOG;
    int grfcid = 1;
    int cb = 0x340;
    /*undefined1* pfnInitDialog;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnAloAdd;
    undefined1* pfnOnAloRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneAlo;
    undefined1* pfnLoadDialogFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleDialogMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostAloLoad;
    undefined1* pfnUpdateDialog;
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

extern VTDIALOG g_vtdialog;