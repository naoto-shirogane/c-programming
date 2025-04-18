/*  c8-9.c

    Rafael Bonilla
    April 16, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 9

    Modify Program ming Project 11 from Chapter 7 so that the program labels its output:

        Enter a first and last name: Lloyd Fosdick
        You entered the name: Fosdick, L.

    The program will need to store the last name (but not the first name) in an array of characters
    until it can be printed. You may assume that the last name is no more than 20 characters long.
*/

#include <stdio.h>

int main(void)
{
    char last_name[20], chr, initial_name;

    int i;

    printf("Enter your first and last name: ");

    /* skips initial whitespace */

    while ((chr = getchar()) == ' ') {

        ;
    }

    initial_name = chr; /* finds the initial */

    /* loops until it finds a whitespace*/

    while ((chr = getchar()) != ' ') {

        ;
    }

    /* loops the rest of the string */

    while ((chr = getchar()) != '\n') {

        if (chr != ' ') {

            last_name[i++] = chr;
        }
    }

    for (int i = 0; i < sizeof(last_name) / sizeof(last_name[0]); i++) {

        putchar(last_name[i]);
    }

    printf(", %c", initial_name);
}