#include "graphics.h"
#include "globals.h"
 

int w[256]= {
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};
int o[256]={
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

int r[256] = {
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

int d[256] = {
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

int l[256] = {
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

int e[256] = {
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};
 
int frame1[256] =
{
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff
};
int frame2[256] =
{
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff
};
int frame3[256]= {
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff
};
int frame4[256] = {
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff
};
int frame5[256] = {
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00ffffff, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x0053b6c8, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 
0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x0065a96c, 0x00ffffff, 
0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff, 0x00ffffff
};


void draw_sprite() // Feature 10 - YOU SHOULD MODIFY THIS SPRITE
{
 int new_piskel_data[256] = {
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x424242, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x424242, 0x00000000, 0x424242, 0x00000000, 0x00000000, 0x00000000, 0x424242, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x424242, 0x00000000, 0x424242, 0x00000000, 0x424242, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x65a96c, 0x00000000, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x65a96c, 0x00000000, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x65a96c, 0x00000000, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x65a96c, 0x00000000, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x65a96c, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

uLCD.BLIT(0,0,16,16, new_piskel_data);
}
 
void draw_lower_status()
{
    // Draw top border of status bar
    uLCD.line(0, 118, 127, 118, GREEN);
    uLCD.locate(14, 15);
    uLCD.printf("%d", gameInfo[5]);
    // Add other status info drawing code here
}
 
void drawWordleLogo() {
    


uLCD.BLIT(25,25,16,16, frame1);
uLCD.BLIT(25,25,16,16, frame2);
uLCD.BLIT(25,25,16,16, frame3);
uLCD.BLIT(25,25,16,16, frame4);
uLCD.BLIT(25,25,16,16, frame5);
}

void drawWordleText() {

uLCD.BLIT(5,80,16,16, w);
uLCD.BLIT(25,80,16,16, o);
uLCD.BLIT(45,80,16,16, r);
uLCD.BLIT(65,80,16,16, d);
uLCD.BLIT(85,80,16,16, l);
uLCD.BLIT(105,80,16,16,e);
}