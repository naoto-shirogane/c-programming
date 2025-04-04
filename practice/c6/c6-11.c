/* c6-11.c

   Rafael Bonilla
   March 23, 2025

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 11

   The value of the mathematical constant e can be 
   expressed as an infinite series:

   e = 1 + 1/1! + 1/2! + 1/3! + ...

   Write a program that approximates e by computing
   the value of

   1 + 1/1! + 1/2! + 1/3! + ... + 1/n!

   where n is an integer entered by the user.

*/

#include <stdio.h>

int main(void)
{
    float series = 0.00f, fact = 1.00f, e = 1.00f;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int inner_index = n; /* count variable for the inner loop */

    for (int i = 1; i < n; i++)
    {

        for (int j = 1; j < inner_index; j++) {
            
            fact *= j; 
        }

        series += 1 / fact; /* the "infinite" sum of the reciprocal of the factorials */
 
        fact = 1; /* we set the value of fact to 1 so we can resume computing in the inner loop */
        inner_index--; /* decrease the count variable so we get (n-1)! */
    }

    printf("%f", e + series);
}