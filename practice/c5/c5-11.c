/* c5-11.c

   Rafael Bonilla
   March 19, 2025
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 11

   Write a program that asks the user for a two-digit number, then
   prints the English word for the number:

       Enter a two-digit number: 45
       You entered the number forty-five.

   Hint: Break the number into two digits. Use one switch statement
   to print the word for the first digit. Use a second switch statement
   to print the word for the second digit. Don't forget that the numbers
   between 11 and 19 require special treatment.

*/

#include <stdio.h>

int main(void)
{
    int n,
    firstDigit, secondDigit;

    printf("Enter a two-digit number: ");
    scanf("%2d", &n);

    if (n < 10 || n > 99)
    {
        printf("Error!");
    }
    else 
    {
        firstDigit = n / 10;
        secondDigit = n % 10;

        if (firstDigit == 1)
        {
            switch (secondDigit)
            {
                case 1: printf("Eleven"); break;
                case 2: printf("Twelve"); break;
                case 3: printf("Thirteen"); break;
                case 4: printf("Fourteen"); break;
                case 5: printf("Fifteen"); break;
                case 6: printf("Sixteen"); break;
                case 7: printf("Seventeen"); break;
                case 8: printf("Eighteen"); break;
                case 9: printf("Nineteen"); break;
                default: break;
            }
        }

        else 
        {
            switch (firstDigit)
            {
                case 2: printf("Twenty"); break;
                case 3: printf("Thirty"); break;
                case 4: printf("Forty"); break;
                case 5: printf("Fifty"); break;
                case 6: printf("Sixty"); break;
                case 7: printf("Seventy"); break;
                case 8: printf("Eighty"); break;
                case 9: printf("Ninety"); break;
            }
    
            switch (secondDigit)
            {
                case 1: printf("-one"); break;
                case 2: printf("-two"); break;
                case 3: printf("-three"); break;
                case 4: printf("-four"); break;
                case 5: printf("-five"); break;
                case 6: printf("-six"); break;
                case 7: printf("-seven"); break;
                case 8: printf("-eight"); break;
                case 9: printf("-nine"); break;
                default: break;
            }
        }
    }
}