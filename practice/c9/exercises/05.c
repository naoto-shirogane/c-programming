#include <stdio.h>

int num_digits(unsigned int n);

int main(void)
{
    unsigned int n;

    printf("Enter a digit: ");
    scanf("%u", &n);

    printf("Number of digits in %u: %d", n, num_digits(n));
}

int num_digits(unsigned int n) 
{
    int i;

    while (n > 0) {

        n /= 10;
        ++i;
    }

    return i;

}