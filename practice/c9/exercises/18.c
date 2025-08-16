#include <stdio.h>
	
void pb(int n) {


    if (n != 0) {

        pb(n / 2);
        putchar('0' + n % 2);

    }

}

int main(void) 

{

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("This is what the mystery function did: ");

    pb(x);

    putchar('\n');

    putchar('C');

}