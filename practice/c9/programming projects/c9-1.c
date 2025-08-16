#include <stdio.h>

void selection_sort(int size, int arr[size]);

int main(void) {

    int size;

    printf("Enter the size of your array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the numbers: ");
    for (int i = 0; i < size; i++) {

        scanf("%d", &arr[i]);
    }

    selection_sort(size, arr);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {

        printf("%d ", arr[i]);
    }
}

void selection_sort(int size, int arr[size]) {

    // If the size of the array is 1, then it means the list is already sorted
    
    if (size == 1) {

        return;
    }

    int end_arr = size - 1;
    int last_element = arr[end_arr];
    int largest = arr[0];
    int found_largest = 0;

    for (int i = 1; i <= end_arr; i++) {

        // Remembers where we found the largest number
        if (arr[i] > largest) {

            largest = arr[i];
            found_largest = i;
        }
    }

    // We swap places
    arr[end_arr] = largest;
    arr[found_largest] = last_element;

    // We shorten the array when we next call it
    selection_sort(size - 1, arr);
}