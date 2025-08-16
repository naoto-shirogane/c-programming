#include <stdbool.h>
#include <stdio.h>

bool check(int x, int y, int n);

int main(void)
{
    printf("%d", check(10, 9, 10));
}

bool check(int x, int y, int n) {

    return ((x > 0 && x < n ) && (y > 0 && y < n)) ? true : false;
}