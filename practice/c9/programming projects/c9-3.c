#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define BLOCK_SIZE 10

void generate_random_walk(char walk[BLOCK_SIZE][BLOCK_SIZE]);
void print_array(char walk[10][10]);

int main(void)
{
    char block[BLOCK_SIZE][BLOCK_SIZE];
    generate_random_walk(block);
    print_array(block);
}

void generate_random_walk(char walk[BLOCK_SIZE][BLOCK_SIZE]) {

        bool visited[BLOCK_SIZE][BLOCK_SIZE] = {false}, 
        up = false, down = false, left = false, right = false;

        int direction, i = 0, j = 0, letter = 65;

        srand((unsigned) time(NULL));

        for (int i = 0; i < BLOCK_SIZE; i++) {

            for (int j = 0; j < BLOCK_SIZE; j++) {
            
                walk[i][j] = '.';
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

                walk[i][j] = letter;
                break;
            }

            direction = rand() % 4;

            // The program receives a random direction. 
            // This switch statement checks if we can go in that direction

            switch (direction) {

                case 0:
                    if (right) {

                        walk[i][j++] = letter++;
                        break;
                    }

                case 1:
                    if (down) {

                        walk[i++][j] = letter++;
                        break;
                    }
                
                case 2:
                    if (left) {

                        walk[i][j--] = letter++;
                        break;
                    }

                case 3:
                    if (up) {

                        walk[i--][j] = letter++;
                        break;
                    }
            }

            visited[i][j] = true;
        }
}

void print_array(char walk[10][10]) {

    for (int i = 0; i < BLOCK_SIZE; i++) {

        for (int j = 0; j < BLOCK_SIZE; j++) {

            putchar(walk[i][j]);
        }
        printf("\n");
    }
}


