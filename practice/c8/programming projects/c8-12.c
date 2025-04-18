/*  c8-12.c

    Rafael Bonilla
    April 16, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 12

    Modify Programming Project 5 from Chapter 7 so that the SCRABBLE values of the letters are stored in an array. 
    The array wil have 26 elements, corresponding to the 26 letters of the alphabet. 
    For example, element 0 of the array will store 1 (because the SCRABBLE value of the letter B is 3), and so forth. 
    As each character of the input word is read, the program will use the array to determine the SCRABBLE value of that character. 
    Use an array initializer to set up the array. 

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char chr;
    int word_value,
    
    scrabble_values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

                        // A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z

    printf("Enter a word: ");

    while ((chr = getchar()) != '\n') {
        
        word_value += scrabble_values[toupper(chr) - 'A'];
    }

    printf("Scrabble value: %d", word_value);
}