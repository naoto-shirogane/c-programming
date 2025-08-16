#include <stdio.h>
#include <stdbool.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void) {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int magic_square[99][99];

    create_magic_square(number, magic_square);
    print_magic_square(number, magic_square);
}

void create_magic_square(int size, int magic_square[size][size]) {

    int row, col, next_row, next_col, n;
    bool visited[99][99] = {false};

    next_row = 0;
    next_col = size / 2;

    while (n <= size * size) {

        // Wraps around if we go out of bounds

        if (next_row < 0) {

            next_row += size;
        }

        if (next_col == size) {

            next_col -= size;
        }

        // If the next block to visit is occupied, 
        // then we just shift our current position one block down

        if (visited[next_row][next_col]) {

            row += 1;
        }
        else {

            row = next_row;
            col = next_col;
        }
        
        magic_square[row][col] = n++;
        visited[row][col] = true;

        next_row = row - 1;
        next_col = col + 1;
    }
}

void print_magic_square(int size, int magic_square[size][size]) {

        for (int i = 0; i < size; i++) {

            for (int j = 0; j < size; j++) {

            printf("%2d ", magic_square[i][j]);
        }
        printf("\n");
    }
}


