/* c7-12.c

   Rafael Bonilla
   March 24, 2025
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 12

   Write a program that evaluates an expression:

       Enter an expression: 1+2.5*3
       Value of expression: 10.5

   The operands in the expression are floating-point numbers;
   the operators are +, -, *, and /. The expression is evaluated
   from left to right (no operator takes precedence over any
   other operator).

*/

#include <stdio.h>

int main(void)
{
    char operator1, operator2;

    float operand1, operand2, operand3, 
    first_expr_result, second_expr_result;

    printf("Enter an expression: ");
    scanf("%f %c %f %c %f", &operand1, &operator1, &operand2,& operator2, &operand3);

    switch (operator1)
    
    {
        case '+':
            first_expr_result = operand1 + operand2;
            break;
        case '-':
            first_expr_result = operand1 - operand2;
            break;
        case '*':
            first_expr_result = operand1 * operand2;
            break;
        case '/':
            first_expr_result = operand1 / operand2;
            break;
        default:
            printf("Invalid operator. Try again");
            return 0;
    }

    switch (operator2)

    {
        case '+':
            second_expr_result = first_expr_result + operand3;
            break;
        case '-':
            second_expr_result = first_expr_result - operand3;
            break;
        case '*':
            second_expr_result = first_expr_result * operand3;
            break;
        case '/':
            second_expr_result = first_expr_result / operand3;
            break;
        default:
            printf("Invalid operator. Try again");
            return 0;
    }
    
    printf("Value of expression: %.2f", second_expr_result);
}