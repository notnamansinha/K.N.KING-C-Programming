#include <stdio.h>

int main(void)
{
    int x, sum;
    printf("Please enter your value: ");
    
    scanf("%d",&x);

    sum = (((((3*x+2)*x-5)*x-1)*x+7)*x-6);

    printf("Answer: %d",sum);

}