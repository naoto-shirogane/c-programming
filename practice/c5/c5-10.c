/* c5-10.c

   Rafael Bonilla
   March 19, 2025
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 10

   Using the switch statement, write a program that converts
   a numerical grade into a letter grade:

       Enter a numerical grade: 84
       Letter grade: B

   Use the following grading scale: A = 90-100, B = 80-89,
   C = 70-79, D = 60-69, F = 0-59. Hint: Break the grade
   into two digits, then use a switch statement to test
   the ten's digit.

*/

#include <stdio.h>

int main(void)
{
    int numGrade, firstDigit;
    char letterGrade;

    printf("Enter numerical grade: ");
    scanf("%d", &numGrade);

    if (numGrade < 0 || numGrade > 100)
    {
        printf("Error!");
    }
    else
    {
        firstDigit = numGrade / 10;
        switch (firstDigit)
        {
            case 10: case 9: letterGrade = 'A'; break;
            case 8: letterGrade = 'B'; break;
            case 7: letterGrade = 'C'; break;
            case 6: letterGrade = 'D'; break;
            case 5: default: letterGrade = 'F'; break; // default means that the grade was lower than 50
        }
        printf("Letter grade: %c", letterGrade);
    }
}