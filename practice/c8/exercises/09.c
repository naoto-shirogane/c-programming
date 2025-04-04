#include <stdio.h>

#define DAYS_MONTH 30
#define HOURS_DAY 24

int main(void)
{
    int temperature_readings[DAYS_MONTH][HOURS_DAY] = 
    
    {{1234},
    {2345},
    {72834},
    {347},
    {12743},
    {87},
    {3248},
    {89743}};

    float temp_month = 0.0f, temp_day = 0.0f, 
    average_temp_month, average_temp_day;

    for (int day = 0; day < DAYS_MONTH; day++) {

        temp_day = 0;

        for (int hour = 0; hour < HOURS_DAY; hour++){

            temp_day += temperature_readings[day][hour];
            
        }

        average_temp_day = temp_day / HOURS_DAY;
        printf("Average temperature for day %d: %.2f\n", day + 1, average_temp_day);

        temp_month += temp_day;
    }

    average_temp_month = temp_month / (DAYS_MONTH * HOURS_DAY);

    printf("Average temperature this month: %.2f", average_temp_month);
}