#include <stdio.h>

int main(void)
{
    float dollar, tax ,amount;

    printf("Please enter your amount: ");

    scanf("%f", &dollar);

    tax = (dollar * 0.05);

    amount = (dollar + tax);

    printf("Total amount: %f", amount);
    
}