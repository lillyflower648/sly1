#include <alo.h>
#include <game.h>
#include <sw.h>

SW* PloNew(CID cid, SW* csw, ALO* paloParent, OID oid, int isplice);
int IploFromStockOid(int oid);
void LoadSwObjectsFromBrx(SW* psw, ALO* paloParent, CBinaryInputStream* pbis);