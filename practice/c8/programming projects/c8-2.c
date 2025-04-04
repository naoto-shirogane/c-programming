/*  c8-2.c

    Rafael Bonilla
    April 3, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 2

    Modify the repdigit.c program of Section 8.1 so that it
    prints a table showing how many times each digit appears in the number

        Enter a number: 41271092
        Digit:      0   1   2   3   4   5   6   7   8   9
        Ocurrences: 1   2   2   0   1   0   0   1   0   1
        
*/

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
    int times_repeated[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {

        digit = n % 10;
        n /= 10;
        
        times_repeated[digit] += 1;
    }

    printf("\n");

    printf("Digit:\t");

    for (int i = 0; i < 10; i++) {

        printf("%d ", i);
    }

    printf("\nOcurrences: ");

    for (int i = 0; i < 10; i++) {
        
        printf("%d ", times_repeated[i]);
    }
}