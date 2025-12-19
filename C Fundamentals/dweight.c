// computing dimensional weight of a box US standards
#include <stdio.h>
 
int main(void) 
{ 
    int length, width, height, volume, dim_weight;
    // Get the dimensions of the box
    printf("Enter the length of the box (in cm): ");
    scanf("%d", &length);
    printf("Enter the width of the box (in cm): ");
    scanf("%d", &width);
    printf("Enter the height of the box (in cm): ");
    scanf("%d", &height);

    // Compute the dimensional weight
    volume = (length * height * width);
    dim_weight = (length * width * height + 165) / 166 ;

    // Display the result
    printf("The volume is: %d \n",volume);
    printf("The dimensional weight of the box is: %d kg\n", dim_weight);
}

