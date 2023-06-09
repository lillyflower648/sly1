#include <brx.h>

void StartupBrx()
{
	BuildEopids();
}

char* PchzFromWid(WID wid)
{
	/*if ((WID::nil < wid) && ((int)wid < g_widMax))
		return g_mpwidachz[(int)wid];

	if (wid == WID::nil)
		return (char*)0x0;*/
	return nullptr;
}

char* PchzFriendlyFromWid(WID wid)
{
	return nullptr;
}

char* PchzFriendlyFromCid(CID cid)
{
	return nullptr;
}

char* PchzFromOid(OID oid)
{
	return nullptr;
}

OID OidFromPchz(char* pchz)
{

	return OID();
}

SW* PloNew(CID cid, SW* csw, ALO* paloParent, OID oid, int isplice)
{
	//g_mpcidpvt[cid]
	SW* temp = csw;
	return temp;
}

void LoadOptionFromBrx(void* pvStruct, EOPID* peopid, CBinaryInputStream* pbis)
{

}

void LoadOptionsFromBrx(void* pvStruct, CBinaryInputStream* pbis)
{

}

int IploFromStockOid(int oid)
{
	uint32_t iplo = oid - 0xc;

	if (0x1c < iplo)
		iplo = 0xffffffff;

	return iplo;
}

void LoadSwObjectsFromBrx(SW* psw, ALO* paloParent, CBinaryInputStream* pbis)
{

}

void SetLoDefaults(LO* plo)
{

}
