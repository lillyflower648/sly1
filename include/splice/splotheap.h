/**
 * @file splice/splotheap.h
 */
#ifndef SPLICE_SPLOTHEAP_H
#define SPLICE_SPLOTHEAP_H

#include "common.h"

typedef void (*PFNDELETE)(void *);

struct SPLOT
{
    SPLOT *psplotNext;
    int fAlive;
};

class CSplotheap
{
private:
    int m_cb;
    int m_c;
    byte *m_ab;
    SPLOT *m_psplotFree;
    SPLOT *m_psplotAlloc;
    SPLOT *m_psplotRecyclable;
    PFNDELETE m_pfndelete;

public:
    void Startup(int cb, int c);
    void Shutdown(void);
    int PvAllocUnsafe(void);
    void *PvAllocClear();
    int PsplotLookup(int);
    void UpdateRecyclable(void);
    void UnmarkAll(void);
    void FreeGarbage(void);
};

extern CSplotheap g_splotheapPair;
extern CSplotheap g_splotheapFrame;
extern CSplotheap g_splotheapUnk1;
extern CSplotheap g_splotheapProc;
extern CSplotheap g_splotheapMethod;

static void *PvFromPsplot(SPLOT *psplot);
static SPLOT *PsplotFromPv(void *pv);
static bool FIsPvGarbage(void *pv);
static void MarkPvAlive(void *pv);

#endif // SPLICE_SPLOTHEAP_H
