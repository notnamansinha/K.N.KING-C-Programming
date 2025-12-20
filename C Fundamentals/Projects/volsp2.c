#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main (void)
{
    float rad;
    printf("Please enter your radius: ");
    
    scanf("%f",&rad);
    
    float vol = (4.0f/3.0f) * PI * (rad * rad * rad);

    printf("%.2f",vol);
}