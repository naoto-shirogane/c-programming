/*  c8-4.c

    Rafael Bonilla
    April 3, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 4
    
    The prototypical Internet newbie is a fellow named BIFF, who has a unique
    way of writing messages. Here's a typical BIFF communiqué:

        H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

    Write a "BIFF filter" that reads a message entered by the user 
    and translates it into BIFF-speak

    Your program should convert the message to upper-case letters, 
    substitute digits for certain letters (A -> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5)
    and then append 10 or so exclamation marks. Hint: Store the original message in an array
    of characters, then go back through the array, translating and printing characters one by one
    
*/

#include <stdio.h>
#include <ctype.h>

#define MSG_SIZE 100 /* Not the most elegant solution, but it works */

int main(void)
{
    char msg[MSG_SIZE] = {0}, msg_chr;
    int index = 0;

    printf("Enter a message: ");

    while ((msg_chr = getchar()) != '\n') {

        msg[index] = toupper(msg_chr);
        index++;
    }

    for (int i = 0; i < index; i++) {

        switch(msg[i]) {
            
            case 'A': putchar('4'); break;
            case 'B': putchar('8'); break;
            case 'E': putchar('3'); break;
            case 'I': putchar('1'); break;
            case 'O': putchar('0'); break;
            case 'S': putchar('5'); break;

            default: putchar(msg[i]); break;
        }
    }

    printf("!!!!!!!");
}


