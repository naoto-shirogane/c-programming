#include <stdio.h>
#include <stdbool.h>

int day_of_year(int month, int day, int year);

int main(void) {

    int month, day, year;

    printf("Enter a date (MM/DD/YY): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Date: %d", day_of_year(month, day, year));
}

int day_of_year(int month, int day, int year) {

    bool leap = (year % 4 == 0 && year % 400 == 0)? true : false;
    int month_day;

    if (day == 29 && !leap) {

        printf("It's not a leap year, bitch\n");
        return 0;
    }

    for (int i = 1; i < month; i++) {

        switch (i) {

            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                month_day += 31;
                break;
    
            case 4: case 6: case 9: case 11:
                month_day += 30;
                break;
    
            case 2:
                if (leap) {
    
                    month_day += 29;
                }
                else {
    
                    month_day += 28;
                }

                break;
    
            default:
                printf("Invalid month. Try again");
                break;
        }
    }

    return month_day + day;
}


