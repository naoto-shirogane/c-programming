/*  c8-5.c

    Rafael Bonilla
    April 3, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 4 
    
    Modify the interest.c program of Section 8.1 so that it compounds
    interest monthly instead of annually. The form of the output shouldn't change:
    the balance should still be shown at annual intervals.
    
*/

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
#define MONTHS 12 /* If you want to examine the first 5 or 8 months instead of the whole 12 */
#define COLUMNS 5 /* To change how many percentages should be shown */

int main(void)
{
    int i, low_rate, num_years, year;
    double value[COLUMNS];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);

    printf("Enter number of years: ");
    scanf("%d", &num_years);
    
    printf("\nYears");

    /* Each element inside the array represents the starting value */

    for (i = 0; i < NUM_RATES; i++) { 
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;

    }

    printf("\n");

    /* We'll compound the monthly value */

    for (year = 1; year <= num_years; year++) /* For each year */ {

        printf("%3d   ", year);
        for (i = 0; i < NUM_RATES; i++) /* By this number of interest rates we have */ {

            for (int month = 1; month <= MONTHS; month++) {
                
                value[i] += (low_rate + i) / 100.00 / 12.00 * value[i];
            }
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
}
