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

float tax(float n);

int main(void) {

    float n;

    printf("Ingresa el monto: ");
    scanf("%f", &n);

    printf("%.2f", tax(n));
}

float tax(float n) {

    float tax_amount;

    if (n < 750) {

        tax_amount = n * .01f;
    }

    else if (n < 2250) {

        tax_amount = 7.50f + (.02f * (n - 750));
    }

    else if (n < 3750) {

        tax_amount = 37.50f + (.03f * (n - 2250));
    }

    else if (n < 5250) {

        tax_amount = 82.50f + (.04f * (n - 3750));
    }

    else if (n < 7000) {

        tax_amount = 142.50f + (.05f * (n - 5250));
    }

    else {

        tax_amount = 230 + (.06f * (n - 7000));
    }

    return tax_amount;
}
