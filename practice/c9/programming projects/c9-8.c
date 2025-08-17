#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

bool play_game(void);
int roll_dice(void);

int main(void) {

    srand((unsigned) time(NULL));

    int wins, losses;
    char usr_response;
    bool result;

    do {

        result = play_game();

        Sleep(3000);

        if (result == true) {

            wins++;
            printf("\n¡You win!\n");
        }
            
        else {

            losses++;
            printf("\n¡You lose!\n");
        }

        printf("\nDo you want to continue playing?: ");
        scanf(" %c", &usr_response);

    } while (usr_response == 'Y' || usr_response == 'y');

    printf("Wins: %d. Losses: %d", wins, losses);
}

/* 	
    The play_game function should first roll the dice to get the "point".

 	We'll do this by making two calls to the roll_dice function: one call for each die. 
    We'll sum the return value of both calls; that sum will be our "point"

	After that, the function should start checking the "first roll" conditions;
    whether the "point" is 7, 11, 2, 3, or 12. If none of the conditions are met,
    then we'll then enter a loop that will terminate by either rolling the "point" again or rolling a 7 

*/

bool play_game(void) {

    int die1, die2, point, roll;

    die1 = roll_dice();
    die2 = roll_dice();

    point = die1 + die2;

    printf("\nYou rolled %d", point);

    // First roll conditions

    switch (point) {

        case 7: case 11:
            return true;

        case 2: case 3: case 12:
            return false;
    }

    Sleep(3000);
    printf("\nNo first roll wins...\n");
    Sleep(3000);
    printf("\nYour point is %d\n", point);

    // Loop that will terminate in a win if we roll the "point" again or a loss if we roll a 7

    do {

        die1 = roll_dice();
        die2 = roll_dice();

        roll = die1 + die2;

        Sleep(3000);

        printf("\nYou rolled a %d", roll);

        if (roll == 7) {

            return false;
        }

    } while (roll != point);

    return true;
}

int roll_dice(void) {

    return rand() % 6;
}