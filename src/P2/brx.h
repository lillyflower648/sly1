#pragma once
#include <ps2t/spaprops.h>
#include <sw.h>
#include <spliceobj.h>

void  StartupBrx();
char* PchzFromWid(WID wid);
char* PchzFriendlyFromWid(WID wid);
char* PchzFriendlyFromCid(CID cid);
char* PchzFromOid(OID oid);
OID   OidFromPchz(char* pchz);
SW*   PloNew(CID cid, SW* csw, ALO* paloParent, OID oid, int isplice);
void  LoadOptionFromBrx(void* pvStruct, EOPID* peopid, CBinaryInputStream* pbis);
void  LoadOptionsFromBrx(void* pvStruct, CBinaryInputStream* pbis);
int   IploFromStockOid(int oid);
void  LoadSwObjectsFromBrx(SW* psw, ALO* paloParent, CBinaryInputStream* pbis);
void  SetLoDefaults(LO* plo);