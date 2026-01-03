#include <stdio.h>

int main(void)
{
    int money, twenties, tens, fives, ones;
    scanf("%d",&money);

    twenties = money / 20;
    money = money % 20;

    tens = money / 10;
    money = money % 10;

    fives = money / 5;
    money = money % 5;

    ones = money / 1;

    printf("20: %d\n10: %d\n5: %d\n1: %d", twenties,tens,fives,ones);

    return 0;
}