#include <stdio.h>

struct XXX
{
    float f;
    union 
    {
        float ff;
        int x[2];
    };
} VV;

int main () {
    VV.ff = 5.5;
    VV.f = 5.5;
    VV.ff= VV.f;
    VV.x[0] = 5;
    return 0;
}