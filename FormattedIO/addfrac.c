#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result, resultdenom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result = num1 * denom2 + num2 * denom1;
    resultdenom = denom1 * denom2;

    printf("The sum is %d/%d\n", result, resultdenom);

}
