#include <stdio.h>

int fact(int n) {

    return n == 1 ? 1 : n * fact(n - 1);
}

int main(void) {

    printf("%d", fact(5));
}