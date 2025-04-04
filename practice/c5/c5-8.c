/* c5-8.c

   Rafael Bonilla
   March 18, 2025
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 8

   The following table shows the daily flights from 
   one city to another:

   Departure time   Arrival time
   -----------------------------
    8:00 am         10:15 am
    9:43 am         11:52 am
   11:19 am          1:31 pm
   12:47 pm          3:00 pm
    2:00 pm          4:08 pm
    3:45 pm          5:55 pm
    7:00 pm          9:20 pm
    9:45 pm         11:58 pm

   Write a program that asks user to enter a time
   (expressed in hours and minutes, using the 24-hour
   clock). The program then displays the departure and
   arrival times for the flight whose departure time is
   closest to that entered by the user:

       Enter a 24-hour time: 13:15
       Closest departure time is 12:47 pm, arriving at 3:00 pm

   Hint: Convert the input into a time expressed in minutes
   since midnight, and compare it to the departure times, also
   expressed in minutes since midnight. For example, 13:15 is
   13 x 60 + 15 = 795 minutes since midnight, which is closer to
   12:47 pm (767 minutes since midnight) than to any of the
   other departure times.

*/

#include <stdio.h>

int main(void)
{
    int timeInMinutes, hours, minutes;

    int midnight = 23 * 60 + 59,
    departure8AM = 8 * 60,
    departure9AM =  (9 * 60) + 43,
    departure11AM = (11 * 60) + 19,
    departure12PM = (12 * 60) + 47,
    departure2PM = 14 * 60,
    departure3PM = (15 * 60) + 45,
    departure7PM = (19 * 60), 
    departure9PM = (21 * 60) + 45;

    printf("\nDeparture   Arrival\n");
    printf("--------------------\n");
    printf(" 8:00 am    10:15 am\n");
    printf(" 9:43 am    11:52 am\n");
    printf("11:19 am     1:31 pm\n");
    printf("12:47 pm     3:00 pm\n");
    printf(" 2:00 pm     4:08 pm\n");
    printf(" 3:45 pm     5:55 pm\n");
    printf(" 7:00 pm     9:20 pm\n");
    printf(" 9:45 pm    11:58 pm\n\n");

    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hours, &minutes);

    timeInMinutes = (hours * 60) + minutes;

    if (timeInMinutes >= 24 * 60 || timeInMinutes <= 0) {

        printf("Invalid hh:mm format");
    }
    else {

        if (timeInMinutes >= 1 && timeInMinutes < departure8AM) {

            printf("8:00 am, arriving at 10:15 am");
        }
        
        else if (timeInMinutes >= departure8AM && timeInMinutes < departure9AM) {

            if (departure9AM - timeInMinutes > timeInMinutes - departure8AM) {

                printf("8:00 am, arriving at 10:15 am");
            }
            else {

                printf("9:43 am, arriving at 11:52 am");
            }
        }

        else if (timeInMinutes >= departure9AM && timeInMinutes < departure11AM) {

            if (departure11AM - timeInMinutes > timeInMinutes - departure9AM) {

                printf("9:43 am, arriving at 11:52 am");
            }
            else {

                printf("11:19 am, arriving at 1:30 pm");
            }
        }

        else if (timeInMinutes >= departure11AM && timeInMinutes < departure12PM) {

            if (departure12PM - timeInMinutes > timeInMinutes - departure11AM) {

                printf("11:19 am, arriving at 1:30 pm");
            }
            else {

                printf("12:47 pm, arriving at 3:00 pm");
            }
        }

        else if (timeInMinutes >= departure12PM && timeInMinutes < departure2PM) {

            if (departure2PM - timeInMinutes > timeInMinutes - departure12PM) {

                printf("12:47 pm, arriving at 3:00 pm");
            }
            else {

                printf("2:00 pm, arriving at 4:08 pm");
            }
        }

        else if (timeInMinutes >= departure2PM && timeInMinutes < departure3PM) {

            if (departure3PM - timeInMinutes > timeInMinutes - departure2PM) {

                printf("2:00 pm, arriving at 4:08 pm");
            }
            else {

                printf("3:45 pm, arriving at 5:55 pm");
            }
        }

        else if (timeInMinutes >= departure3PM && timeInMinutes < departure7PM) {

            if (departure7PM - timeInMinutes > timeInMinutes - departure3PM) {

                printf("3:45 pm, arriving at 5:55 pm");
            }
            else {

                printf("7:00 pm, arriving at 9:20 pm");
            }
        }

        else if (timeInMinutes >= departure7PM && timeInMinutes < departure9PM) {

            if (departure9PM - timeInMinutes > timeInMinutes - departure7PM) {

                printf("7:00 pm, arriving at 9:20 pm");
            }
            else {

                printf("9:45 pm, arriving 11:58 pm");;
            }
        }

        else if (timeInMinutes >= departure9PM && timeInMinutes < midnight) {
            
            printf("9:45 pm, arriving 11:58 pm");
        }
    }
}