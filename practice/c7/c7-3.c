/* c7-3.c

   Rafael Bonilla
   March 23, 2025
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 3

   Modify the sum2.c program of Section 7.1 to
   sum a series of double values.

*/

#include <stdio.h>

int main(void)
{
    double n, sum;

    printf("This program sums a series of floating-point values: \n");
    printf("Enter floating-points (0 to terminate): ");

    scanf("%lf", &n);

    while (n != 0.0) {

        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %f\n", sum);
}