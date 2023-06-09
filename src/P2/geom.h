#pragma once
#include <vec.h>

struct GEOM {
    float sRadius;
    int cpos;
    struct VECTOR* apos;
    int csurf;
    struct SURF* asurf;
    int cedge;
    struct EDGE* aedge;
    int* mpiposiiedgeMac;
    int* aiedge;
    struct VECTOR* mpisurfposCenter;
    float* mpisurfsRadius;
};

void InitGeom(GEOM* pgeom);