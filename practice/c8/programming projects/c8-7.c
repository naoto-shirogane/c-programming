/*  c8-7.c

    Rafael Bonilla
    April 3, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 7 
    
    Write a program that reads a 5 x 5 array of integers and then 
    prints the row sums and the column sums: 
    
        Enter row 1: 8 3 9 0 10
        Enter row 2: 3 5 17 1 1
        Enter row 3: 2 8 6 23 1
        Enter row 4: 15 7 3 2 9
        Enter row 5: 6 14 2 6 0

        Row totals: 30 27 40 36 28
        Column totals: 34 37 37 32 21
        
*/

#include <stdio.h>
#define ROWS 5
#define COLS 5

int main(void)
{
    int arr[ROWS][COLS], row_total, col_total;

    printf("This program will print the sum of the rows and columns of this %dx%d matrix.\n", ROWS, COLS);
    printf("Please enter %d numbers (ex: 1 ... %d) and press enter.\n", COLS, COLS);

    for (int i = 0; i < ROWS; i++) {

        printf("Enter row %d: ", i + 1);

        for (int j = 0; j < COLS; j++) {

            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");

    printf("Row totals: ");

    for (int i = 0; i < ROWS; i++) {

        for (int j = 0; j < COLS; j++) {

            row_total += arr[i][j];
        }

        printf("%d ", row_total);
        row_total = 0;
    }

    printf("\nColumn total: ");

    for (int j = 0; j < COLS; j++) {

        for (int i = 0; i < ROWS; i++) {
            
            col_total += arr[i][j];
        }
        
        printf("%d ", col_total);
        col_total = 0;
    }
}