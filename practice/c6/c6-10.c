/* c6-10.c

   Rafael Bonilla
   March 23, 2025

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 10

   Programming Project 9 in Chapter 5 asked you to write a 
   program that determines which of two dates come earlier
   on the calendar. Generalize the program so that the user
   may enter any number of dates. The user will enter 0/0/0
   to indicate that no more dates will be entered.

       Enter a date (mm/dd/yy): 3/6/08
       Enter a date (mm/dd/yy): 5/17/07
       Enter a date (mm/dd/yy): 6/3/07
       Enter a date (mm/dd/yy): 0/0/0
       5/17/07 is the earliest date

*/

#include <stdio.h>

int main(void)
{
    int month, day, year, date, earlyMonth, earlyDay, earlyYear, earlyDate;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month, &day, &year);

    date = ((month * 30) + day + (year * 365));

    if (date == 0) {

        return 0;
    }
    
    else if (day > 31 || day < 0 || month < 1 || month > 12) {
        
        printf("Invalid format!");
    }

    earlyMonth = month;
    earlyDay = day;
    earlyYear = year;

    earlyDate = date;

    for (;;) {

        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &month, &day, &year);
    
        date = ((month * 30) + day + (year * 365));

        if (date == 0) {

            break;
        }

        else if (day > 31 || day < 0 || month < 1 || month > 12) {

            printf("Invalid format!");
        }

        else if (date < earlyDate) {

            earlyMonth = month;
            earlyDay = day;
            earlyYear = year;

            earlyDate = date;
        }
    }

    printf("%d/%d/%d is the earliest date", earlyMonth, earlyDay, earlyYear);
}