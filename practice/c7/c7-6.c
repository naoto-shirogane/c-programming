/* c7-6.c

   Rafael Bonilla
   March 24, 2025
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 6

   Write a program that prints the values of sizeof(int),
   sizeof(short), sizeof(long), sizeof(float), sizeof(double)
   and sizeof(long double).

*/

#include <stdio.h>

int main(void)
{
    printf("Size of int: %zu", sizeof(int));
    printf("\nSize of short: %zu", sizeof(short));
    printf("\nSize of long: %zu", sizeof(long));
    printf("\nSize of float: %zu", sizeof(float));
    printf("\nSize of double: %zu", sizeof(double));
    printf("\nSize of long double: %zu", sizeof(long double));
}