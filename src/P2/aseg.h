#pragma once
#include <dl.h>
#include <lo.h>
#include <ref.h>
#include <util.h>
#include <actseg.h>
#include <game.h>

struct CHN {
	enum OID oid;
	struct ACP* pacp;
	struct ACR* pacr;
	struct ACS* pacs;
	struct ACG* pacgTwist;
	int cpacgPose;
	struct ACG** apacgPose;
};

enum SEGRPT {
	SEGRPT_Nil = -1,
	SEGRPT_Once = 0,
	SEGRPT_Loop = 1,
	SEGRPT_PingPong = 2,
	SEGRPT_Manual = 3,
	SEGRPT_Max = 4
};

struct ASEG {
    struct LO ASEG;
    float tMax;
    int cchn;
    struct CHN* achn;
    enum OID oidRoot;
    enum SEGRPT segrpt;
    int fDefault;
    int fHandsOff;
    int fRealClock;
    int ceaApply;
    struct EA* aeaApply;
    int ceaFrame;
    struct EA* aeaFrame;
    int ceaRetract;
    struct EA* aeaRetract;
    struct DL dlAsega;
    int nPriority;
    float svtMaster;
    struct CLQ clqMasterSuck;
    struct LM lmMasterSuck;
    float svtMasterSuck;
    struct CHN* pchnStrip;
    int coidSearchRoot;
    enum OID* aoidSearchRoot;
};

struct ASEGD {
	struct ASEG* paseg;
	enum OID oidAseg;
	enum IAK iak;
	float tLocal;
	float svtLocal;
};

struct VTASEGBL {
    struct VT* pvtSuper = g_vtaseg.pvtSuper;
    enum CID cid = CID::ASEGBL;
    int grfcid = 64;
    int cb = 0xE0;
    /*undefined1* pfnInitAseg;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnLoAdd;
    undefined1* pfnOnLoRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneAsegbl;
    undefined1* pfnLoadAsegblFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleLoMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindLo;
    undefined1* pfnPostAsegblLoad;
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
    undefined1* pfnGetLoParams;
    undefined1* pfnUpdateLoLiveEdit;*/
};

extern VTASEGBL g_vtasegbl;