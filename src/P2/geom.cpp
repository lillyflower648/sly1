#include <geom.h>

void InitGeom(GEOM* pgeom)
{
	pgeom->aedge = 0x0;
	pgeom->cpos = 0;
	pgeom->apos = 0x0;
	pgeom->csurf = 0;
	pgeom->asurf = 0x0;
	pgeom->cedge = 0;
}