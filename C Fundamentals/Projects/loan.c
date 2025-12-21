#include <stdio.h>

int main(void)
{
    float loan, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f",&loan);

    printf("Enter interest rate: ");
    scanf("%f",&rate);
    
    rate = (rate*0.00083333333);

    printf("Enter monthly payment: ");
    scanf("%f",&payment);



    loan = ((loan * rate ) + loan);
    loan = (loan - payment);

    printf("Balance remaining after first payment: $ %.2f\n",loan);

    loan =  ((loan * rate) + loan);
    loan = (loan - payment);
    printf("Balance remaining after second payment: $ %.2f\n",loan);

    loan =  ((loan * rate) + loan);
    loan = (loan - payment);
    printf("Balance remaining after third payment: $ %.2f\n",loan);
}

