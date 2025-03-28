/* c6-9.c

   Rafael Bonilla
   March 23, 2025

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 9

   Programming Project 8 in Chapter 2 asked you to write a
   program that calculates the remaining balance on a loan
   after the first, second, and third monthly payments.
   Modify the program so that it also asks the user to enter
   the number of payments and then displays the balance
   remaining after each of these payments.

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