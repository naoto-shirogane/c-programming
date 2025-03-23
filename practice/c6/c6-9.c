/* c2p8.c

   Ray Santos
   August 18, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 2. Programming Project 8

   Write a program that calculates the remaining balance on a loan
   after the first, second, and third monthly payments:

      Enter amount of loan: 20000.00
      Enter interest rate: 6.0
      Enter monthly payment: 386.66

      Balance remaining after first payment: $19713.34
      Balance remaining after second payment: $19425.25
      Balance remaining after third payment: $19135.71

   Display each balance with two digits after the decimal point.
   Hint: Each month, the balance is decreased by the amount of the
   payment, but increased by the balance times the monthly interest
   rate. To find the monthly interest rate, convert the interest rate
   entered by the user to a percentage and divide it by 12.

*/

#include <stdio.h>

int main(void)
{
    float amount_loan, interest_rate, 
    monthly_payment, monthly_interest_rate,
    balance;

    int number_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &amount_loan);

    balance = amount_loan;

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d", &number_payments);

    monthly_interest_rate = (interest_rate * .01f) / 12.00f;

    for (int i = 1; i <= number_payments; i++)
    {
        balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
        printf("%d. %.2f\n", i, balance);
    }

}