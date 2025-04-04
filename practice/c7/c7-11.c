/* c7-11.c

   Rafael Bonilla
   March 24, 2025
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 11

   Write a program that takes a first name and last name
   entered by the user and displays the last name, a comma, 
   and the first initial, followed by a period:

       Enter a first and last name: Rafael Bonilla
       Bonilla, R.

   The user's input may contain extra spaces before the
   first name, between the first and last names, and
   after the last name.

*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char letter;
    char initial_name;

    printf("Enter your first and last name: ");

    /* skips initial whitespace */

    while ((letter = getchar()) == ' ')  {
        ;
    }

    initial_name = letter; /* finds the initial */

    /* loops until it finds a whitespace*/

    while ((letter = getchar()) != ' ') {

        ;
    }

    /* loops the rest of the string */

    while ((letter = getchar()) != '\n') {

        if (letter != ' ') {

            putchar(letter);
        }
    }

    printf(", %c.", initial_name);
}