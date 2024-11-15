#include <find.h>

INCLUDE_ASM(const s32, "P2/find", PdlFromSwOid__FP2SW3OID);

INCLUDE_ASM(const s32, "P2/find", MatchSwObject__FP2LOiiiT0iPiPP2LOT6);

INCLUDE_ASM(const s32, "P2/find", CploFindSwObjects__FP2SWi3OIDP2LOiPP2LO);

LO * PloFindSwObject(SW *psw, int grffso, OID oid, LO *ploContext) {
    LO *value1[4];
    value1[0] = 0;
    CploFindSwObjects(psw, FSO_ReturnActualCount | grffso, oid, ploContext, 1, value1);
    return value1[0];
}

LO * PloFindSwNearest(SW *psw, OID oid, LO *ploContext) {
    LO *aplo[4];
    aplo[0] = 0;
    CploFindSwObjects(psw, FSO_ReturnActualCount | FSO_FindNearest, oid, ploContext, 1, aplo);
    return aplo[0];
}

LO * PloFindSwChild(SW *psw, OID oid, ALO *paloAncestor) {
    LO *aplo[4];
    aplo[0] = 0;
    CploFindSwObjects(psw, FSO_ReturnActualCount | FSO_FindChild, oid, paloAncestor, 1, aplo);
    return aplo[0];
}

int FIsCidDerivedFrom(CID cid, CID cidAncestor) {
    void **value1 = (&g_mpcidpvt)[cid];
    while (value1 != (void**)0) {
        if (value1[1] == (void*)cidAncestor) {
            return 1;
        }
        value1 = (void**) *value1;
    }
    return 0;
}

INCLUDE_ASM(const s32, "P2/find", CploFindSwObjectsByClass__FP2SWi3CIDP2LOiPP2LO);

INCLUDE_ASM(const s32, "P2/find", PloFindSwObjectByClass__FP2SWi3CIDP2LO);

ALO * PaloFindLoCommonParent(LO *plo, LO *ploOther) {
    ALO *current;
    while (plo != (LO *)0x0) {
        current = (ALO *)ploOther;
        while (current != (ALO *)0x0) {
            if (plo == current) {
                return (ALO *)plo;
            }
            current = (ALO *)current->paloParent;
        }
        plo = (LO *)plo->paloParent;
    }
    return (ALO *)0x0;
}
