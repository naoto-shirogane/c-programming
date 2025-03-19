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