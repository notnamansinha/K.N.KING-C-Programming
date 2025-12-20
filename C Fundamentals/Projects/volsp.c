#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846


float main(void)
{
    
    float rad = 10;
    float vol = (4.0f/3.0f)*PI*(rad*rad*rad);

    printf("%.2f",vol);
}