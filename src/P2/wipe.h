#pragma once
#include <keyhole.h>
#include <transition.h>

typedef unsigned char byte;

enum class WIPEK : int
{
	Fade = 0x0,
	Keyhole	= 0x1,
	WorldMap = 0x2,
	Frozen = 0x3,
	Max = 0x4
};

enum class WIPES
{
	Idle = 0,
	WipingOut = 1,
	Black = 2,
	WipingIn = 3,
	Max = 4
};

struct WIPE
{
    WIPES wipes;
    float tWipes;
    float uBlack;
    struct TRANS trans;
    WIPEK wipek;
    struct TRANS transButton;
    WIPEK wipekButton;
};

static WIPE  g_wipe;
extern WIPE* g_pwipe;

void WipeToWorldWarp(LevelTableStruct* pchzWorld, OID oidWarp, WIPEK wipek);
void ActivateWipe(WIPE* pwipe, TRANS* ptrans, WIPEK wipek);
void SetWipeWipes(WIPE* pwipe, WIPES wipes);
void DrawWipe(WIPE* pwipe);
void UpdateWipe(WIPE* pwipe, JOY* pjoy);
void InitWipe(WIPE* pwipe);
void SetWipeButtonTrans(WIPE* pwipe, TRANS* ptrans, WIPEK wipek);
int  FCatchWipeButtonTrans(WIPE* pwipe, JOY* pjoy, WIPES wipesNew);
