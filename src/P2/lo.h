#pragma once
#include <basic.h>
#include <dl.h>
#include <util.h>
#include <iostream>

// LO could just mean LOCAL OBJECT

struct LO {
    struct BASIC LO;
    enum   OID oid;
    struct DLE dleOid;
    struct SW* psw;
    struct ALO* paloParent;
    struct DLE dleChild;
    struct LO* ploCidNext;
    struct MQ* pmqFirst;
    char*  pchzName;
    struct CFrame* pframe;
    struct PXR* ppxr;
    uint64_t dtickPerf;
};

struct DLR {
    OID oidChild;
    DLR* pdlrNext;
};

void InitLo(LO* plo);
void PostLoLoad(LO* plo);
void AddLo(LO* plo);
void AddLoHierarchy(LO* plo);
void OnLoAdd(LO* plo);
void RemoveLo(LO* plo);
void DeferLoRemove(LO* plo);
void SetLoSuckHideLimits(LO* plo, LM* plmUSuck);
void RemoveLoHierarchy(LO* plo);
void OnLoRemove(LO* plo);
void SnipLo(LO* plo);
int  FFindLoParent(LO* plo, ALO* paloParent);
void SetLoParent(LO* plo, ALO* paloParent);
int  FIsLoInWorld(LO* plo);
void GetLoInWorld(LO* plo, int* pfInWorld);
LO*  PloCloneLo(LO* plo, SW* psw, ALO* paloParent);
void CloneLoHierarchy(LO* plo, LO* ploBase);
void CloneLo(LO* plo, LO* ploBase);
//void LoadLoFromBrx(LO* plo, CBinaryInputStream* pbis);
void PostLoLoad(LO* plo);
void SubscribeLoObject(LO* plo, LO* ploTarget);

struct VTLO {
    struct VT* pvtSuper = g_vtbasic.pvtSuper;
    enum CID cid = CID::LO;
    int grfcid = 0;
    int cb = 0x40;
    void(*pfnInitLo) = InitLo;
    void(*pfnSetLoDefaults);
    void(*pfnAddLo) = AddLo;
    void(*pfnRemoveLo) = RemoveLo;
    void(*pfnAddLoHierarchy) = AddLoHierarchy;
    void(*pfnRemoveLoHierarchy) = RemoveLoHierarchy;
    void(*pfnOnLoAdd) = OnLoAdd;
    void(*pfnOnLoRemove) = OnLoRemove;
    void(*pfnCloneLoHierarchy) = CloneLoHierarchy;
    void(*pfnCloneLo) = CloneLo;
    void(*pfnLoadLoFromBrx);
    void(*pfnAddLoRecursive);
    void(*pfnRemoveLoRecursive);
    void(*pfnHandleLoMessage);
    void(*pfnSendLoMessage);
    void(*pfnBindLo);
    void(*pfnPostLoLoad) = PostLoLoad;
    void(*pfnUpdateLo);
    void(*pfnUpdateLoXfWorld);
    void(*pfnUpdateLoXfWorldHierarchy);
    void(*pfnFreezeLo);
    void(*pfnSetLoParent);
    void(*pfnApplyLoProxy);
    void(*pfnSubscribeLoObject) = SubscribeLoObject;
    void(*pfnUnsubscribeLoObject);
    void(*pfnSubscribeLoStruct);
    void(*pfnUnsubscribeLoStruct);
    void(*pfnGetLoParams);
    void(*pfnUpdateLoLiveEdit);
};

extern VTLO g_vtlo;