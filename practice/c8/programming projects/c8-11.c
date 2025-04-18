/*  c8-11.c

    Rafael Bonilla
    April 16, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 11

    Modify Programming Project 4 from C hapter 7 so that the program labels its output:

        Enter phone number : 1-800-COL-LECT
        In numeric form: 1-800-265-5328 
        
    The program will need to store the phone number (either in its original form or in its
    numeric form) in an array of characters until it can be printed. You may assume that the
    phone number is no more than 15 characters long

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char phone_number[15], chr;

    int i;

    printf("Enter phone number: ");

    while ((chr = getchar()) != '\n') {
        
        switch (toupper(chr)) {

            case 'A': case 'B': case 'C':
                phone_number[i] = '2';
                break;

            case 'D': case 'E': case 'F':
                phone_number[i] = '3';
                break;

            case 'G': case 'H': case 'I':
                phone_number[i] = '4';
                break;

            case 'J': case'K': case 'L':
                phone_number[i] = '5';
                break;

            case 'M': case'N': case 'O':
                phone_number[i] = '6';
                break;

            case 'P': case'R': case 'S':
                phone_number[i] = '7';
                break;

            case 'T': case'U': case 'V':
                phone_number[i] = '8';
                break;

            case 'W': case'X': case 'Y':
                phone_number[i] = '9';
                break;

            default:
                phone_number[i] = chr;
                break;
        }
        
        i++;
    }

    for (int i = 0; i < 15; i++) {

        putchar(phone_number[i]);
    }

}