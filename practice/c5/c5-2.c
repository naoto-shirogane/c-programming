/* c5-2.c

   Rafael Bonilla
   March 24, 2025
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 2

   Write a program that asks the user for a 24-hour time,
   then displays the time in 12-hour form:

       Enter a 24-hour time: 21:11
       Equivalent 12-hour time: 9:11 PM

   Be careful not to display 12:00 as 0:00.

*/

#include <stdio.h>

int main(void)
{
    int hour, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    if (hour > 24 || hour < 0 || minutes > 59 || minutes < 0)
    {
        printf("Incorrect input!");
    }

    else
    {
        printf("Equivalent 12-hour time: ");

        switch (hour)
        {
            case 13: printf("1"); break;
            case 14: printf("2"); break;
            case 15: printf("3"); break;
            case 16: printf("4"); break;
            case 17: printf("5"); break;
            case 18: printf("6"); break;
            case 19: printf("7"); break;
            case 20: printf("8"); break;
            case 21: printf("9"); break;
            case 22: printf("10"); break;
            case 23: printf("11"); break;
            case 00: printf("12"); break;
            default: printf("%d", hour); break;
        }
    
        printf(":%.2d ", minutes);
    
        if (hour < 12)
        {
            printf("AM");
        }

        else
        {
            printf("PM");
        }
    }
}