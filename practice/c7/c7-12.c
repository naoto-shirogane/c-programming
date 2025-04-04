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
    result;

    printf("Enter an expression: ");
    scanf("%f %c %f %c %f", &operand1, &operator1, &operand2,& operator2, &operand3);

    switch (operator1) {

        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 == 0) {

                printf("You can't divide by 0");
                return 0;
            }
            else {

                result = operand1 / operand2;
                break;
            }
        default:
            printf("Invalid operator. Try again");
            return 0;
    }

    switch (operator2) {

        case '+':
            result += operand3;
            break;
        case '-':
            result -= operand3;
            break;
        case '*':
            result *= operand3;
            break;
        case '/':
            if (operand3 == 0) {

                printf("You can't divide by 0.");
                return 0;
            }
            else {
                
                result /= operand3;
                break;
            }
        default:
            printf("Invalid operator. Try again");
            return 0;
    }
    
    printf("Value of expression: %.2f", result);
}