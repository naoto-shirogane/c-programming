/* c6-6.c

   Rafael Bonilla
   March 20, 2025

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 6

   Write a program that prompts the user to enter a
   number n, then prints all even squares between
   1 and n. For example, if the user enters 100, the
   program should print the following:

       4
       16
       36
       64
       100

*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i * i <= n; i++) {

        if ((i * i) % 2 == 0) {
            
            printf("%8d\n", i * i);
        }
    }

}