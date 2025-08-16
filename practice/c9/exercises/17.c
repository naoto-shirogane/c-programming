#include <stdio.h>

int fact(int n);

int main(void) {

    printf("%d", fact(5));
}

int fact(int n) {

    int result;

    for (int i = 1; i <= n; i++) {

        result *= i;
    }

    return result;

}
