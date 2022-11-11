#ifndef MODEL_LEVEL_H
#define MODEL_LEVEL_H

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "archs/amd_zen.h"

#define min(a,b)     ( (a) > (b) ? (b) : (a) )

int model_level(int NL, int CL, int WL, int dataSize, int m, int n);
void get_optim_mc_nc_kc(int dataSize, int m, int n, int k, int mr, int nr, int *mc, int *nc, int *kc);

#endif