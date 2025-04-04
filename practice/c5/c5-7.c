/* c5-7.c

   Rafael Bonilla
   August 14, 2025
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 7

   Write a program that finds the largest and smallest of
   four integers entered by the user:

       Enter four integers: 21 43 10 35
       Largest: 43
       Smallest: 10

   Use as few if statements as possible.
   Hint: Four if statements are sufficient.

*/

#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    int small1, small2, large1, large2;
    int largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a < b) {

        small1 = a;
        large1 = b;
    }
    
    else {

        small1 = b;
        large1 = a;
    }

    if (c < d) {

        small2 = c;
        large2 = d;
    }

    else {

        small2 = d;
        large2 = c;
    }

    if (large1 < large2) {
        
        largest = large2;
    }

    else {

        largest = large1;
    }

    if (small1 < small2) {

        smallest = small1;
    }

    else {
        
        smallest = small2;
    }

    printf("Largest: %d\nSmallest: %d", largest, smallest);
}