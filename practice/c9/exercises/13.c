#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int evaluate_position(char board[8][8]);

int main(void) {

    char board[8][8] = 
    
    {
    
    {'T','N','B','Q','K','B','N','T'},
    {'P','P','P','P','P','P','P','P'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'p','p','p','p','p','p','p','.'},
    {'t','n','b','q','k','b','n','t'}
    
    };

    int advantage = evaluate_position(board);

    if (advantage > 0) {

        printf("White has the advantage");
    }

    else if (advantage < 0) {

        printf("Black has the advantage");
    }
    else {

        printf("Both colors have the same advantage in material");
    }
}

int evaluate_position(char board[8][8]) {

    int white, black;

    for (int i = 0; i < 8; i++) {

        for (int j = 0; j < 8; j++) {

            char pos = board[i][j];

            if (!isalpha(pos)) {

                continue;
            }

            switch (pos) {

                case 'q':
                
                    black += 9;
                    break;

                case 'r':

                    black += 5;
                    break;

                case 'b':

                    black += 3;
                    break;

                case 'n':

                    black += 3;
                    break;

                case 'p': 

                    black += 1;
                    break;

                case 'Q':

                    white += 9;
                    break;

                case 'R':

                    white += 5;
                    break;

                case 'B':

                    white += 3;
                    break;

                case 'N':

                    white += 3;
                    break;

                case 'P':

                    white += 1;
                    break;
            }
        }
    }

    return (white - black);
}