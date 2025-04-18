/*  c8-10.c

    Rafael Bonilla
    April 16, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 10

    Modify Programming Project 8 from Chapter 5 so that the departure times are
    stored in an array and the arrival times are stored in a second array. 
    (The times are integers, representing the number of minutes since midnight.) 
    The program will use a loop to search the array of departure times for the one 
    closest to the time entered by the user. 
    
*/

#include <stdio.h>

int main(void)
{

    int time_in_minutes, hours, minutes,
    
    departure[8][8] = {{8, 0}, {9, 43},{11, 19},{12, 47}, {14, 0}, {15, 45}, {19, 0}, {21, 45}},
    
    arrival[8][8] = {{10, 15}, {11, 52}, {1, 31}, {3, 0}, {4, 8}, {5, 55}, {9, 20}, {11, 58}};

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
    scanf(" %d : %d", &hours, &minutes);

    time_in_minutes = (hours * 60) + minutes;

    for (int i = 0; i < sizeof(departure) / sizeof (departure[0]); i++) {

        int early_flight_d = departure[i][0] * 60 + departure[i][1],
        later_flight_d = departure[i + 1][0] * 60 + departure[i + 1][1];
        
        // If the time entered is inside the interval

        if (time_in_minutes >= early_flight_d && time_in_minutes < later_flight_d) {

            // We check which departure time is closer to

            if (later_flight_d - time_in_minutes > time_in_minutes - early_flight_d) {

                printf("Closest departure time is %d:%.2d, arriving at %d:%.2d\n", departure[i][0], departure[i][1], arrival[i][0], arrival[i][1]);
            }
            else {
                
                printf("Closest departure time is %d:%.2d, arriving at %d:%.2d\n", departure[i + 1][0], departure[i + 1][1], arrival[i + 1][0], arrival[i + 1][1]);
            }
        }
    }
}