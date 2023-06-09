#pragma once
#include <iostream>

struct VECTOR
{
    float x;
    float y;
    float z;
    float gUnused;
};

struct VECTOR4
{
    float x;
    float y;
    float z;
    float w;
};

void CalculateVectorPanTilt(VECTOR* pvec, float* ppan, float* ptilt);
void ConvertDeulToW(VECTOR* param_1, VECTOR* param_2, VECTOR* param_3);
void FindClosestPointBetweenLines(VECTOR* param_1, VECTOR* param_2, VECTOR* param_3, VECTOR* param_4, float* param_5, float* param_6, VECTOR* param_7);
void FindClosestPointBetweenLineSegments(VECTOR* param_1, VECTOR* param_2, VECTOR* param_3, VECTOR* param_4, VECTOR param_5, float* param_6, VECTOR* param_7);
void GetNormalVector(VECTOR* param_1, VECTOR* param_2);
void GetNormalVectors(VECTOR* param_1, VECTOR* param_2, VECTOR* param_3, VECTOR* param_4);
void LimitVectorLength(VECTOR* param_1, float param_2, VECTOR* param_3);
long RadBetweenVectors(VECTOR* param_1, VECTOR* param_2, VECTOR* param_3);
void SetVectorCylind(float param_1, float param_2, float param_3, VECTOR* param_4);
void SetVectorSphere(float param_1, float param_2, float param_3, VECTOR* param_4);
float SProjectVector(VECTOR* param_1, VECTOR* param_2);
