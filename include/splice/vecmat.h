/**
 * @file splice/vecmat.h
 */
#ifndef SPLICE_VECMAT_H
#define SPLICE_VECMAT_H

#include "common.h"

void IncrefVector(VECTOR *pvector);

void DecrefVector(VECTOR *pvector);

void IncrefMatrix(MATRIX4 *pmatrix);

void DecrefMatrix(MATRIX4 *pmatrix);

void IncrefClq(CLQ *pclq);

void DecrefClq(CLQ *pclq);

void IncrefLm(LM *plm);

void DecrefLm(LM *plm);

void IncrefSmp(SMP *psmp);

void DecrefSmp(SMP *psmp);

#endif // SPLICE_VECMAT_H
