/* c5-5.c
   Rafael Bonilla
   March 13, 2025
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 4
   In one state, single residents are subject to 
   the following income tax 
   
   Income            Amount of tax
   -------------------------------
   Not over $750     1% of income
   $750 - $2,250     $7.50   plus 2% of amount over $750
   $2,250 - $3,750   $37.50  plus 3% of amount over $2,250
   $3,750 - $5,250   $82.50  plus 4% of amount over $3,750
   $5,250 - $7,000   $142.50 plus 5% of amount over $5,250
   Over $7,000       $230.00 plus 6% of amount over $7,000
   
   Write a program that asks the user to enter the amount of
   taxable income, then displays the tax due.
*/

#include <stdio.h>

int main(void)
{
    float taxIncome, taxDue;

    printf("Enter your taxable income: ");
    scanf("%f", &taxIncome);

    if (taxIncome < 750)
        taxDue = .001f * taxIncome;
    else if (taxIncome < 2250)
        taxDue = 7.50f + (.02f * (taxIncome - 750.00f));
    else if (taxIncome < 3750)
        taxDue = 37.50f + (.03f * (taxIncome - 2250.00f));
    else if (taxIncome < 5250)
        taxDue = 82.50f + (.04f * (taxIncome - 3750.00f));
    else if (taxIncome < 7000)
        taxDue = 142.50f + (.05f * (taxIncome - 5250.00f));
    else
        taxDue = 230.00f + (.06f * (taxIncome - 7000.0f));
    
    printf("Your tax due amounts to: %.2f$", taxDue);

}