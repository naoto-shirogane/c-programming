/*  03.c

    Rafael Bonilla
    March 27, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Exercise 3
    
    Write a declaration of an array named weekend containing seven bool values.
    Include a designated initializer that makes the first and last values true;
    all other values should be false.
    
*/


#include <stdio.h> 
#include <stdbool.h> /* C99 only */

int main(void)
{
    int weekend[7] = {true, false, false, false, false, false, true};
}
