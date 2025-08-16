float compute_GPA(int n, char a[n]);

#include <stdio.h>
#include <ctype.h>

int main(void) {

    char grades[5] = {'a', 'c', 'd', 'f', 'f'};
    printf("%.3f", compute_GPA(5, grades));
}

float compute_GPA(int n, char a[n]) {

    float average;

    for (int i = 0; i < n; i++) {

        char letter = tolower(a[i]);

        switch(letter) {

            case 'a':
                average += 4;
                break;
            case 'b':
                average += 3;
                break;
            case 'c':
                average += 2;
                break;
            case 'd':
                average += 1;
                break;
            case 'f':
                break;
            default:
                printf("Bad input\n");
                return 0;
        }
    }

    average /= n;

    return average;
}