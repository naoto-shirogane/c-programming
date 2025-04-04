/* c7-13.c

   Rafael Bonilla
   March 26, 2025
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 13

   Write a program that calculates the average word length
   for a sentence: 

       Enter a sentence: It was deja vu all over again.
       Average word length: 3.4

   For simplicity, your program should consider a punctuation
   mark to be part of the word to which it is attached. Display
   the average word length to one decimal place.

*/

#include <stdio.h>

int main(void)
{
    printf("Enter a sentence: ");

    char input;
    int letter_count, word_count = 1;

    while ((input = getchar()) != '\n') {

        switch (input) {

            case ' ':
                word_count++;
                break;
        
            default:
                letter_count++;
                break;
        }
    }

    printf("Average word length: %.2f", (float) letter_count / word_count);
}