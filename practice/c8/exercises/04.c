/*  03.c

    Rafael Bonilla
    March 27, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Exercise 4

    (C99) Repeat Exercise 3, 
    but this time use a designated initializer.
    Make the initializer as short as possible.
    
*/

#include <stdbool.h>

int main(void)
{
    bool weekend[7] = {true, [6] = true};
}


