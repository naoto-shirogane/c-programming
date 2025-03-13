#include <stdio.h>

int main(void)
{
    int n = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (0 < n && n <= 9)
    {
        printf("%d has 1 digit", n);
    }
    else if (n <= 99)
    {
        printf("%d has 2 digits", n);
    }
    else if (n <= 999)
    {
        printf("%d has 3 digits", n);
    }
    else if (n <= 9999)
    {
        printf("%d has 4 digits", n);
    }
}