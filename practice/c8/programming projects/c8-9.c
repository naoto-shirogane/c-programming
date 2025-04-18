/*  c8-9.c

    Rafael Bonilla
    April 16, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 9

    Write a program that generates a "random walk" across a 10 x 10 array. The array
    will contain characters (all `'.'` initially). The program must randomly "walk"
    from element to element, always going up, down, left or right by one element.
    The elements visited by the program will be labeled with the letters `A` through
    `Z`, in the order visited. Here's an example of the desired output:


        A . . . . . . . . .
        B C D . . . . . . .
        . F E . . . . . . .
        H G . . . . . . . .
        I . . . . . . . . .
        J . . . . . . . Z .
        K . . R S T U V Y .
        L M P Q . . . W X .
        . N O . . . . . . .
        . . . . . . . . . .

    Hint: Use the srand and rand functions (see deal.c) to generate random
    numbers. After generating a number, look at its remainder when divided by 4.
    There are four possible values for the remainder -- 0, 1, 2 and 3 -- indiciating
    the direction of the next move. Before performing a move, check that (a) it
    won't go outside the array, and (b) it doesn't take us to an element that
    already has a letter assigned. If either condition is violated, try moving in
    another direction. If all four directions are blocked, thr program must
    terminate. Here's an example of premature termination:

        A B G H I . . . . .
        . C F . J K . . . .
        . D E . M L . . . .
        . . . . N O . . . .
        . . W X Y P Q . . .
        . . V U T S R . . .
        . . . . . . . . . .
        . . . . . . . . . .
        . . . . . . . . . .
        . . . . . . . . . .

    Y is blocked on all four sides, so there's no place to put Z. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define BLOCK_SIZE 10

int main(void)
{
    char block[BLOCK_SIZE][BLOCK_SIZE];

    bool visited[BLOCK_SIZE][BLOCK_SIZE] = {false}, 
    up = false, down = false, left = false, right = false;

    int direction, i, j, letter = 65;

    srand((unsigned) time(NULL));

    for (int i = 0; i < BLOCK_SIZE; i++) {

        for (int j = 0; j < BLOCK_SIZE; j++) {
            
            block[i][j] = '.';
        }
    }

    while (letter < 91) {

        up = down = left = right = false;
        direction = 0;

        // Possible moves

        if (j + 1 < BLOCK_SIZE && !visited[i][j + 1]) {

            right = true;
        }

        if (i + 1 < BLOCK_SIZE && !visited[i + 1][j]) {

            down = true;
        }

        if (j - 1 >= 0 && !visited[i][j - 1]) {

            left = true;
        }

        if (i - 1 >= 0 && !visited[i - 1][j]) {

            up = true;
        }

        if ((up == false && down == false) && (left == false && right == false)) {

            block[i][j] = letter;
            break;
        }

        direction = rand() % 4;

        // The program receives a random direction. 
        // This switch statement checks if we can go in that direction

        switch (direction) {

            case 0:
                if (right) {

                    block[i][j++] = letter++;
                    break;
                }

            case 1:
                if (down) {

                    block[i++][j] = letter++;
                    break;
                }
                
            case 2:
                if (left) {

                    block[i][j--] = letter++;
                    break;
                }

            case 3:
                if (up) {

                    block[i--][j] = letter++;
                    break;
                }
        }

        visited[i][j] = true;
    }

    for (int i = 0; i < BLOCK_SIZE; i++) {

        for (int j = 0; j < BLOCK_SIZE; j++) {

            putchar(block[i][j]);
        }
        printf("\n");
    }
}