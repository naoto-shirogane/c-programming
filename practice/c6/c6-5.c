/* c6-5.c

   Rafael Bonilla
   March 20, 2025

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 5

   Programming Project 1 in Chapter 4 asked you to write a
   program that displays a two-digit number with its digits
   reversed. Generalize the program so that the number can
   have one, two, three, or more digits.

   Hint: Use a do loop that repeatedly divides the number by
   10, stopping when it reaches 0.

*/

#include <stdio.h>

int main(void)
{
    int input, otherDigits, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &input);

    otherDigits = input; /* to remember the original number */

    printf("The reversal is: ");

    do {

        lastDigit = otherDigits % 10; /* gets the last digit */
        printf("%d", lastDigit); 
        otherDigits /= 10; /* gets the other-than-last digits */

    } while (otherDigits > 0);

}