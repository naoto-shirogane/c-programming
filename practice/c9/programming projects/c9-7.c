#include <stdio.h>

int power(int x, int n);

int main(void) {

    int x, n;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter the power you want to raise this number to: ");
    scanf("%d", &n);

    printf("%d", power(x, n));
}

int power(int x, int n) {

    int result;

    if (n == 0) {

        return 1;
    }
    else {

        if (n % 2 == 0) {
            
            result = power(x, n/ 2);
            return result * result;   
        }

        else {

            return x * power(x, n - 1);
        }
    }
}
