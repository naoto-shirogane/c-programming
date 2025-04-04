/* c5-1.c

   Rafael Bonilla
   March 24, 2025
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 1

   Write a program that calculates how many digits a
   number contains:

       Enter a number: 374
       The number 374 has 3 digits

   You may assume that the number has no more than four digits.
   Hint: Use if statements to test the number. For example, if
   the number is between 0 and 9, it has one digit. If the number
   is between 10 and 99, it has two digits.

*/

#include <stdio.h>

int main(void)
{
    int n = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (0 < n && n <= 9) {

        printf("%d has 1 digit", n);
    }

    else if (n <= 99) {

        printf("%d has 2 digits", n);
    }

    else if (n <= 999) {

        printf("%d has 3 digits", n);
    }
    else if (n <= 9999) {
        
        printf("%d has 4 digits", n);
    }
}