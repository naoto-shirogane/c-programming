/* c7p09.c

   Rafael Bonilla
   March 24, 2025
   
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 9

   Write a program that asks the user for a 12-hour time,
   then displays the time in 24-hour form:

       Enter a 12-hour time: 9:11 PM
       Equivalent 24-hour time: 21:11

   See Programming Project 8 for a description of the
   input format.

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours, minutes;

    char meridiam;

    printf("Enter a 12-hour time: ");
    scanf("%d:%2d %c", &hours, &minutes, &meridiam);

    if (hours < 0 || hours >= 24)
    {
        printf("Wrong hour format. Try again");
    }
    else if (minutes < 0 || minutes > 59)
    {
        printf("Wrong minute format. Try again");
    }

    else 
    {
        if (hours == 12)
        {
            hours = 0;
        }

        switch (meridiam = toupper(meridiam))
        {
        case 'A':
            break;
        
        case 'P':
            hours += 12;
            break;
        
        default:
            printf("Invalid AM/PM entry");
            return 0;
        }

        printf("Equivalent 24-hour time: %d:%.2d", hours, minutes);
    }
}