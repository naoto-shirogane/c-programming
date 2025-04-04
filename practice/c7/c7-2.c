/*  c7-2.c

    Rafael Bonilla
    March 23, 2025
  
    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 1 (int version)

    The square2.c program of Section 6.2 will fail (usually by
    printing strange answers) if i * i exceeds the maximum int
    value. Run the program and determine the smallest value of 
    n that causes failure. Try changing the type of i to short
    and running the program again. (Don't forget to update the
    conversion specifications in the call to printf!) Then try
    long. From these experiments, what can you conclude about
    the number of bits used to store integer types on your
    machine? 
   
    The smallest value of n that can cause an integer overflow
    if n is a int type variable is 46341 
    The smallest value of n that can cause an integer overflow 
    if n is a short type variable is 32767
    The smallest value of n that can cause an integer overflow
    if n is a long type variable is 46341

*/


#include <stdio.h>

int main(void)
{
    for (long i = 1; i * i > 0; i++) {

        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0) {

            printf("Press enter to continue: ");
            while (getchar() != '\n') {
                
                ;
            }
        }
    }
}
  