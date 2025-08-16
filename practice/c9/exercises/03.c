#include <stdio.h>

int gcd(int n, int m);

int main(void) {

    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Greatest common divisor: %d", gcd(a, b));
}

int gcd(int x, int y) {

    int remainder;

    while (y != 0) {
        
        remainder = x % y;
        x = y;
        y = remainder;
    }

    return x;
}