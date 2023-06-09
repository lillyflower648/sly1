#pragma once

enum OBRF {
    OBRF_Min = 0,
    OBRF_Max = 1
};

struct OBR {
    enum OBRF obrf;
    struct SO* pso;
    float* ps;
};

struct OXA {
    struct OX* pox;
    struct SO* pso;
    struct OXA* poxaNext;
    struct OXA* poxaPrev;
};