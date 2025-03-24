/* c6-3.c

   Rafael Bonilla
   March 20, 2025

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 3

   Write a program that asks the user to enter a fraction,
   then reduces the fraction to lowest terms:

       Enter a fraction: 6/12
       In lowest terms: 1/2

   Hint: To reduce a fraction to lowest terms, first compute
   the GCD of the numerator and denominator. Then divide both
   the numerator and denominator by the GCD.

*/

#include <stdio.h>

int main(void)
{
    int num, den, remainder, gcd;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    if (den == 0)
    {
        printf("You can't divide by 0!");
    }

    else
    {
        int n = num, m = den;

        while (m != 0)    
        {
            remainder = n % m;
            n = m;
            m = remainder;
        }
    
        gcd = n;
    
        num /= gcd;
        den /= gcd;
    
        printf("In lowest terms: %d/%d", num, den);
    }
}