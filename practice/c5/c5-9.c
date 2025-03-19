/*c5p9.c

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
    int month1, day1, year1,
    month2, day2, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month1, &day1, &year1);

    printf("Enter the second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month2, &day2, &year2);

    printf("\n");

    if (year1 == year2)
    {
        if (month1 == month2)
        {
            if (day1 == day2)
            {
                printf("They're the same exact date!");
            }
            else if (day1 > day2)
            {
                printf("Second date is earlier than second date");
            }
            else 
            {
                printf("First date is earlier than second date");
            }
        }
        else if (month1 > month2)
        {
            printf("Second date is earlier than second date");
        }
        else 
        {
            printf("First date is earlier than second date");
        }
    }
    else if (year1 > year2)
    {
        printf("Second date is earlier than second date");
    }
    else
    {
        printf("First date is earlier than second date");
    }
}