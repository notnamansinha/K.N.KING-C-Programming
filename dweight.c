// computing dimensional weight of a box US standards
#include <stdio.h>
 
int main(void) 
{ 
    float length, width, height, dim_weight;
#define MEOW 165.0 / 166.0
    // Get the dimensions of the box
    printf("Enter the length of the box (in cm): ");
    scanf("%f", &length);
    printf("Enter the width of the box (in cm): ");
    scanf("%f", &width);
    printf("Enter the height of the box (in cm): ");
    scanf("%f", &height);

    // Compute the dimensional weight
    dim_weight = (length * width * height) * MEOW;

    // Display the result
    printf("The dimensional weight of the box is: %.2f kg\n", dim_weight);
}