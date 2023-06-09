#pragma once
typedef unsigned char byte;

/* BLOT state */
enum class BLOTS : int
{
	Hidden = 0x0,
	Appearing = 0x1,
	Visible = 0x2,
	Disappearing = 0x3,
	Max = 0x4
};

struct RGBA {
    byte bRed;
    byte ab[1];
    byte bGreen;
    byte bBlue;
    byte bAlpha;
};

/* Used to draw screen objects */
struct BLOT
{
    struct VTBLOT* pvtblot;
    struct VTCTR* pvtctr;
    struct VTLIFECTR* pvtlifectr;
    struct VTCLUECTR* pvtcluectr;
    struct VTKEYCTR* pvtkeyctr;
    struct VTGOLDCTR* pvtgoldctr;
    struct VTCOINCTR* pvtcoinctr;
    struct VTTRUNKCTR* pvttrunkctr;
    struct VTCRUSHERCTR* pvtcrusherctr;
    struct VTBOOSTCTR* pvtboostctr;
    struct VTPLACECTR* pvtplacectr;
    struct VTLAPCTR* pvtlapctr;
    struct VTPUFFCHARGECTR* pvtpuffchargectr;
    struct VTBOSSCTR* pvtbossctr;
    struct VTNOTE* pvtnote;
    struct VTTITLE* pvttitle;
    struct VTTOTALS* pvttotals;
    struct VTCALL* pvtcall;
    struct VTSCORES* pvtscores;
    struct VTLOGO* pvtlogo;
    struct VTATTRACT* pvtattract;
    struct VTTIMER* pvttimer;
    struct VTLETTERBOX* pvtletterbox;
    struct VTDEBUGMENU* pvtdebugmenu;
    struct VTPROMPT* pvtprompt;
    struct VTCREDIT* pvtcredit;
    struct VTTV* pvttv;
    struct VTBINOC* pvtbinoc;
    struct VTLGNR* pvtlgnr;
    struct VTWMC* pvtwmc;
    struct CFont* pfont;
    char achzDraw[512];
    struct RGBA rgba;
    float rFontScale;
    struct CTextEdge* pte;
    enum BLOTK blotk;
    struct BLOTI* pbloti;
    float x;
    float y;
    float xOn;
    float yOn;
    float xOff;
    float yOff;
    float dx;
    float dy;
    float uOn;
    float dtAppear;
    float dtVisible;
    float dtDisappear;
    float dtBlotsExtra;
    enum BLOTS blots;
    float tBlots;
    float* ptNow;
    int fActive;
};

struct CTR {
    struct BLOT CTR;
    int nDisplay;
    int* pnActual;
    int* pnTotal;
    float dgDisplayMax;
    float uRemain;
    //undefined1* pfnsmack;
    void* pv;
};

void SetBlotBlots(BLOT* pblot, BLOTS blots);
void RenderBlots();
void DrawBlots();
void DrawCtr(CTR* pctr); // Draws Hud and pause menu

