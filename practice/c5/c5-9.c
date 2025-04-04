/* c5-9.c

   Rafael Bonilla
   March 19, 2025
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 9

   Write a program that prompts the user to enter two
   dates and the indicates which date comes earlier
   on the calendar:

       Enter first date (mm/dd/yy): 3/6/08
       Enter second date (mm/dd/yy): 5/17/07
       5/17/07 is earlier than 3/6/08

*/
#include <stdio.h>

int main(void)
{
    int date1, date2, month1, day1, year1,
    month2, day2, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month1, &day1, &year1);

    printf("Enter the second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month2, &day2, &year2);

    date1 = ((month1 * 30) + day1 + (year1 * 365));
    date2 = ((month2 * 30) + day2 + (year2 * 365));

    if (date1 < date2) {

        printf("- %d/%d/%.2d comes earlier than %d/%d/%.2d", day1, month1, year1, day2, month2, year2);
    }

    else if (date2 < date1) {

        printf("- %d/%d/%.2d comes earlier than %d/%d/%.2d", day2, month2, year2, day1, month1, year1);
    }

    else {
        
        printf("- They're the same date.");
    }
}