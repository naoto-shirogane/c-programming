#include <stdio.h>

int main(void)
{
    int month, day, year, date, earlyMonth, earlyDay, earlyYear, earlyDate;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month, &day, &year);

    date = ((month * 30) + day + (year * 365));

    if (date == 0)
    {
        return 0;
    }
    
    else if (day > 31 || day < 0 || month < 1 || month > 12)
    {
        printf("Invalid format!");
    }

    earlyMonth = month;
    earlyDay = day;
    earlyYear = year;

    earlyDate = date;

    for (;;)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &month, &day, &year);
    
        date = ((month * 30) + day + (year * 365));

        if (date == 0)
        {
            break;
        }

        else if (day > 31 || day < 0 || month < 1 || month > 12)
        {
            printf("Invalid format!");
        }

        else if (date < earlyDate)
        {
            earlyMonth = month;
            earlyDay = day;
            earlyYear = year;

            earlyDate = date;
        }
    }

    printf("%d/%d/%d is the earliest date", earlyMonth, earlyDay, earlyYear);
}