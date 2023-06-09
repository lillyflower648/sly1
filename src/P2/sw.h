#pragma once
#include <bis.h>
#include <dl.h>
#include <bbmark.h>
#include <pzo.h>
#include <light.h>
#include <rip.h>
#include <slotheap.h>
#include <vis.h>
#include <mb.h>

// SW could mean static world.

struct PSL {
    int cploCloneFree;
    LO** aploClone;
};

// SW is like the entity list for objects in the game.
struct SW {
    LO SW;
    int cpsoAll;
    int cpsoRoot;
    DL dlRoot;
    DL dlChild;
    DL dlMRD;
    DL dlBusy;
    DL dlBusySo;
    DL dlMRDRealClock;
    DL adlHash[512];
    LO* aploCidHead[162];
    OBR* aaobr;
    byte* aaoxf;
    OXA* aoxa;
    OXA* poxaFree;
    OXA* poxaAlloc;
    int fAaoxValid;
    SLOTHEAP slotheapOx;
    SLOTHEAP slotheapXp;
    SLOTHEAP slotheapXa;
    SLOTHEAP slotheapMq;
    SLOTHEAP slotheapAct;
    SLOTHEAP slotheapRip;
    RIPG* pripgFree;
    RIPG* pripgDefault;
    SLOTHEAP slotheapBlip;
    SLOTHEAP slotheapBlipsp;
    SLOTHEAP slotheapAsega;
    DL dlAsega;
    DL dlAsegaRealClock;
    DL dlAsegaPending;
    SLOTHEAP slotheapSma;
    DL dlSma;
    SLOTHEAP slotheapAmb;
    DL dlAmb;
    SLOTHEAP slotheapExc;
    DL dlExc;
    SLOTHEAP slotheapExplste;
    DL dlExplste;
    DL dlLight;
    SLOTHEAP slotheapShadow;
    DL dlShadow;
    SLOTHEAP slotheapStso;
    SLOTHEAP slotheapFader;
    DL dlFader;
    DL dlRealClockFader;
    DL dlShape;
    DL dlPathzone;
    LVK lvk;
    DL dlProxy;
    DL dlFly;
    DL dlDprize;
    DL dlRat;
    DL dlRathole;
    DL dlDartFree;
    DL dlSpire;
    DL dlRail;
    DL dlLanding;
    DL dlBusyLasen;
    DL dlBlipg;
    DL dlBlipgFree;
    DL dlCrfod;
    VAULT* pvault;
    LO* aploStock[29];
    RGBA rgbaSky;
    LSM lsmDefault;
    int ibnk;
    MUSID musid;
    int cisi;
    ISI aisi[16];
    VISMAP* pvismap;
    //MQ* pmqCallbackFirst;
    //MQ* pmqCallbackLast;
    int cpaloRemerge;
    ALO** apaloRemerge;
    VECTOR dvGravity;
    int csplcSplice;
    //SPLC* asplcSplice;
    uint symidScheduledCallbackList;
    int symidMax;
    char** mpsymidachz;
    int coptidExtra;
    char** mpoptidachzExtra;
    int cpsl;
    PSL apsl[128];
    int cclueAll;
    int cchkpntAll;
    float dtChallengePar;
    int cgoldAll;
    float gexcMenu;
    int cHandsOff;
    RSE arse[4];
    int irse;
    MBG* pmbg;
    float rDarken;
    float rDarkenSmooth;
};

static SW g_sw;
extern SW* g_psw;
//extern char** g_mpwidachz;
//extern int g_widMax;

void InitSwDlHash(SW* psw);
void InitSw(SW* psw);
void DeleteSw(SW* psw);
void SetupBulkDataFromBrx(int fLoadBulkData, CBinaryInputStream* pbis);
void LoadBulkDataFromBrx(CBinaryInputStream* pbis);
void SetSwGravity(SW* psw, float z);
int  FOverflowSwLo(SW* psw, LO* plo, int fHiPri);
void CreateSwPrizes(SW* psw);
void LoadSwFromBrx(SW* psw, CBinaryInputStream* pbis);

struct VTSW {
    struct VT* pvtSuper = g_vtlo.pvtSuper;
    enum CID cid = CID::SW;
    int grfcid = 0;
    int cb = 0x2420;
    void(*pfnInitSw) = InitSw;
    void(*pfnSetLoDefaults);
    void(*pfnAddLo) = AddLo;
    void(*pfnRemoveLo) = RemoveLo;
    void(*pfnAddLoHierarchy) = AddLoHierarchy;
    void(*pfnRemoveLoHierarchy) = RemoveLoHierarchy;
    void(*pfnOnLoAdd) = OnLoAdd;
    void(*pfnOnLoRemove) = OnLoRemove;
    void(*pfnCloneLoHierarchy) = CloneLoHierarchy;
    void(*pfnCloneLo) = CloneLo;
    void(*pfnLoadSwFromBrx) = LoadSwFromBrx;
    void(*pfnAddLoRecursive);
    void(*pfnRemoveLoRecursive);
    void(*pfnHandleLoMessage);
    void(*pfnSendLoMessage);
    void(*pfnBindLo);
    void(*pfnPostLoLoad) = PostLoLoad;
    void(*pfnUpdateSw);
    void(*pfnUpdateLoXfWorld);
    void(*pfnUpdateLoXfWorldHierarchy);
    void(*pfnFreezeLo);
    void(*pfnSetLoParent) = SetLoParent;
    void(*pfnApplyLoProxy);
    void(*pfnSubscribeLoObject);
    void(*pfnUnsubscribeLoObject);
    void(*pfnSubscribeLoStruct);
    void(*pfnUnsubscribeLoStruct);
    void(*pfnGetSwParams);
    void(*pfnUpdateLoLiveEdit);
};

extern VTSW g_vtsw;