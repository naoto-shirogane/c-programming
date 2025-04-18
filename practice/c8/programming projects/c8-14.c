/*  c8-14.c

    Rafael Bonilla
    April 16, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 14

    Write a program that reverses the words in a sentence:

        Enter a sentence: you can cage a swallow can't you?
        Reversal of sentence: you can't swallow a cage can you?

    Hint: Use a loop to read the characters one by one and store them in a one-dimensional
    char array. Have the loop stop at a period, question mark, or exclamation point (the "termi-
    nating character"), which is saved in a separate char variable. Then use a second loop to
    search backward through the array for the beginning of the last word. Print the last word,
    then search backward for the next-to-last word. Repeat until the beginning of the array is
    reached. Finally, print the terminating character

*/

#include <stdio.h>

int main(void) 
{
    char sentence[100], chr, term_chr;
    int index = 0, end = 0;

    printf("Enter a sentence: ");

    while ((chr = getchar()) != '\n') {

        if (chr == '.' || chr == '?' || chr == '!') {

            term_chr = chr;
            break;
        }

        else {

            sentence[index++] = chr;
        }
    }

    // Remembers the end of the sentence

    end = index - 1; 

    for (int negative_index = index; negative_index > -1; negative_index--) {

        if (sentence[negative_index] == ' ' || negative_index == 0) {

            // This makes sure that we include the first word 
            // (We have to do this since the first word doesn't have a space before it)

            negative_index = (negative_index == 0) ? --negative_index : negative_index; 

            // It will loop

            for (int start = negative_index + 1; start <= end; start++) {

                putchar(sentence[start]);
            }

            putchar(' ');

            // 

            end = negative_index - 1; 
        }
    }

    putchar(term_chr);
}

