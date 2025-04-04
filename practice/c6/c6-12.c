/* c6-12.c

   This excerpt was taken out of (@raywritescode)'s github 
   repo dedicated to this same book. I'm only copying 
   the description to each problem.

   Rafael Bonilla
   March 23, 2025

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 12

   Modify Programming Project 11 so that the program
   continues adding terms until the current term becomes
   less than E where E is a small (floating-point) number
   entered by the user.
   
   This right here is what @raywritescode wrote:
   
   [rsantos] For example, if the user enters 7 as the
   value for n and 0.0015 as the value for E, then the
   program will not add the values for 1/6! (0.0014) and
   1/7! (0.0002) to the final value of constant e because 
   1/6! (0.0014) < 0.0015.

*/

#include <stdio.h>

int main(void)
{
    float series = 0.00f, fact = 1.00f, e = 1.00f, eps;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter a small floating-point number ε: ");
    scanf("%f", &eps);

    int inner_index = n; /* count variable for the inner loop */ 

    for (int i = 1; i < n; i++) {
        
        for (int j = 1; j < inner_index; j++) {

            fact *= j; 
        }

        if ((1.00f / fact) < eps) {

            ; /* we'll start doing something once we have a reciprocal bigger than eps */ 
        }

        else {

            series += 1.00f/fact; /* the "infinite" sum of the reciprocal of the factorials */
        }
        
        fact = 1.00f; /* we set the value of fact to 1 so we can resume computing in the inner loop */ 
        inner_index--; /* decrease the inner index, so it computes (n-1)! */
    }

    printf("%f", e + series);
}