/*  c8-16.c

    Rafael Bonilla
    April 16, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 16

    Write a program that test whether two words are anagrams (permutations of the same letters):

        Enter first words: smartest
        Enter second words: mattress
        The words are anagrams.

        Enter first word: dumbest
        Enter second word: stumble
        The words are not anagrams.

    Write a loop that reads the first word, character by character, 
    using an array of 26 integers to keep track of how many times each letter has been seen. 
    (For example, after the word smartest has been read, the array should contain the values 
    1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0 0 0 0 0 0, reflecting the fact that smartest contains 
    one a, one e, one m, one r, two s's and two t's.) Use another loop to read the second word, 
    except this time decrementing the corresponding array element as each letter is read. 
    Both loops should ignore any characters that aren't letters, 
    and both should treat upper-case letters in the same way as lower-case letters.
    After the second word has been read, 
    use a third loop to check whether all the elements in the array are zero. 
    If so, the words are anagrams.
    Hint: You may wish to use the functions from <ctype.h>, such as isalpha and tolower.

    [@naoto-shirogane: Only used one loop]

*/

#include <stdio.h>
#include <ctype.h>

int main(void) {

    char first_word[30], second_word[30], chr, chr_first, chr_second;
    int index, alphabet[26] = {0};

    printf("Enter first word: ");
    
    while ((chr = getchar()) != '\n') {

        first_word[index++] = chr;
    }

    index = 0;

    printf("Enter second word: ");

    while ((chr = getchar()) != '\n') {

        second_word[index++] = chr;
    }

    for (int i = 0; i < index; i++) {

        chr_first = tolower(first_word[i]);
        alphabet[chr_first - 'a']++;

        chr_second = tolower(second_word[i]);
        alphabet[chr_second - 'a']--;
    }

    for (int i = 0; i < 26; i++) {

        if (alphabet[i] == 1) {

            printf("Not an anagram!");
            return 0;
        }
    }

    printf("Anagram");
}