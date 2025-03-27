/*  05.c

    Rafael Bonilla
    March 27, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Exercise 5

    The Fibonacci numbers are 0. 1. 1. 2. 3. 5. 8, 13, ..., where each number is the sum of the
    two preceding numbers. Write a program fragment that declares an array named
    fib_numbers of length 40 and fills the array with the first 40 Fibonacci numbers.

    Hint:
    Fill in the first two numbers individually, then use a loop to compute the remaining numbers */


#define size_arr 40
#include <stdio.h>

int main(void)
{
    int fib_numbers[size_arr] = {0, 1};

    printf("This are the first 40 fibonacci numbers:\n\n");

    for (int i = 2; i < size_arr ; i++)
    {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
    }

    for (int i = 0; i < size_arr; i++)
    {
        printf("%d. %d\n", i, fib_numbers[i]);
    }
}