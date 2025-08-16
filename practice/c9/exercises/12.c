#include <stdio.h>

#define SIZE 4

double inner_product(int n, double a[n], double b[n]);

int main(void) {

    double 
    
    a[SIZE] = {1.0f, 3.0f, 5.0f, 7.0f}, 
    b[SIZE] = {2.0f, 4.0f, 6.0f, 8.0f};

    printf("Inner product: %.2lf", inner_product(SIZE, a, b) );
}

double inner_product(int n, double a[n], double b[n]) {

    double result;

    for (int i = 0; i < n; i++) {

        result += a[i] * b[i];
    }

    return result;
}