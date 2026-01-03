// computing dimensional weight of a box US standards
#include <stdio.h>
 
int main(void) 
{ 
    int length, width, height, volume, dim_weight;

        height = 8;
        length = 12;
        width = 10;
        volume = height * length * width;
        dim_weight = (volume+165)/166;
        
    printf("The volume is: %d \n",volume);
    printf("The dimensional weight of the box is: %d kg\n", dim_weight);
}
