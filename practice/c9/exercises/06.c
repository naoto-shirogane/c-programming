/* 

    The solution to this exercise was taken out of @williamgherman's repository:

    https://github.com/williamgherman/c-solutions

    Go check it out if you want to. 
    It's really organized and the solutions are quite elegant!

*/

#include <stdio.h>

int digit(unsigned int n, int pos);

int main(void) {

    int n, pos;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter the position: ");
    scanf("%d", &pos);

    printf("The digit at the %d-th position is: %d", pos, digit(n, pos));
}

int digit(unsigned int n, int pos) {

    while (pos-- > 1) {

        if ((n /= 10) <= 0) {

            return 0;
        }
    }

    return n % 10;   
}
