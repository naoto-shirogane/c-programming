// Write functions that return the following values 

int largest_arr_el(int n, int a[n]);
float average_in_arr(int n, int a[n]);
int number_positives_arr(int n, int a[n]);

#include <stdio.h>

int main(void) {

    int a[5] = {4, 3, 6, 5, 1};

    printf("Largest element in array: %d\n", largest_arr_el(5, a));
    printf("Average: %.2f\n", average_in_arr(5, a));
    printf("Number of positive numbers inside the array: %d", number_positives_arr(5, a));
}

// Return the largest element inside the array

int largest_arr_el(int n, int a[n]) {

    --n;

    int largest = a[n];

    while (--n > -1) {

        if (a[n] > largest) {

            largest = a[n];
        }
    }

    return largest;
}

// Returns the average of the elements inside the array

float average_in_arr(int n, int a[n]) {

    float average;
    int i;

    while (i < n) {

        average += a[i];
        i++;
    }

    average /= n;

    return average;
}

// Returns the amount of positive numbers inside the array

int number_positives_arr(int n, int a[n]) {

    int i;

    while (--n > -1) {

        if (a[n] > 0) {

            ++i;
        }
    }

    return i;   
}