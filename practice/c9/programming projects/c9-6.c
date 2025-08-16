#include <stdio.h>

float polynomial(float x);

int main(void) {

    float number, result;

    printf("Enter a number, any number: ");
    scanf("%f", &number);

    result = polynomial(number);

    printf("%.3f", result);
}

float polynomial(float x) {

    return ((3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6);
}
