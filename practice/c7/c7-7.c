/* c7-7.c

    Rafael Bonilla
    March 24, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 7

    Modify Programming Project 6 from Chapter 3 so that the user
    may add, subtract, multiply, or divide two fractions 
    (by entering either +, -, *, or / between the fractions).

*/

#include <stdio.h>

int main(void)
{
    int num1, den1, num2, den2;
    int result_num, result_den;
    int gcd, remainder;

    char op;

    printf("Enter two fractions separated by an operator (+, -, *, /): ");
    scanf("%d / %d %c %d / %d", &num1, &den1, &op, &num2, &den2);

    if (den1 == 0 || den2 == 0)
    {
        printf("You can't divide by zero.");
        return 0;
    }

    else 
    {
        switch (op)
        {
            case '+':
                result_num = num1 * den2 + num2 * den1;
                result_den = den1 * den2;
                break;

            case '-':
                result_num = num1 * den2 - num2 * den1;
                result_den = den1 * den2;
                break;
    
            case '*':
                result_num = num1 * den1;
                result_den = den1 * den2;
                break;
    
            case '/':
                result_num = num1 * den2;
                result_den = num2 * den1;
                break;
    
            default:
                printf("You didn't input an operator");
                break;
        }

        /* Getting the GCD to see the fraction in its lowest terms */

        int n = result_num, m = result_den;

        while (m != 0) 
        
        {
            remainder = n % m;
            n = m;
            m = remainder;
        }
    
        gcd = n;
    
        result_num /= gcd;
        result_den /= gcd;
    
        printf("The result is: %d/%d", result_num, result_den);
    }
}
