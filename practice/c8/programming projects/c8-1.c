/*  c8-1.c

    Rafael Bonilla
    April 3, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 1

    Modify the repdigit.c program of Section 8.1 so that it
    shows which digits (if any) were repeated

        Enter a number: 939577
        Repeated digit(s): 7 9

*/

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int remember_digit[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {

        digit = n % 10;
        
        if (digit_seen[digit]) {

            remember_digit[digit] = digit;
        }

        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digits: ");

    for (int i = 0; i < 10; i++) {

        if (remember_digit[i]){

            printf("%d ", remember_digit[i]);
        }
    }
}