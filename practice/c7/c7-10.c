/* c7-10.c

   Rafael Bonilla
   March 24, 2025
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 10

   Write a program that counts the number of vowels
   (a, e, i, o, u) in a sentence:

       Enter a sentence: And that's the way it is.
       Your sentence contains 6 vowels.

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter;
    int count;

    printf("Enter a sentence: ");

    while ((letter = getchar()) != '\n') {

        switch (toupper(letter)) {

            case 'A': case 'E': case 'I': case 'O': case'U':
                count++;
                break;
                
            default:
                break;
        }
    }

    printf("Your sentence contains %d vowels.", count);
}