#include <stdio.h>

double median(double x, double y, double z);

int main(void) {

    double a = 20, b = 19, c = 21;

    printf("%.3lf", median(a, b, c));
}

double median(double x, double y, double z) {

    double median = x;

    if (z <= y <= x || x <= y <= z) {

        median = y;
    } 
    else if (x <= z <= y || y <= z <= x) {

        median = z;
    }

    return median;
}