/* 02.c

    Rafael Bonilla
    March 27, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Exercise 2
   
    The Q&A section shows how to use a letter as an array subscript. Describe how to use a
    digit (in character form) as a subscripts

    [@naoto-shirogane]: Since the ASCII codes of the numbers from 0 to 9 are
    all numbered succesively, then we can substract their ASCII codes to get the number we're inputting. 
   
        For example: 

        1.  Let's say we input the character representation of the number 8. 
        The compiler will treat the character as a small integer; in this case, its ASCII code.
   
        2.  We'll substract the ASCII code of 0 (48) from the ASCII Code of 8 (56)
   
        3.  This expression is equal to 8, which is the numerical representation of our digit 
        
*/

#include <stdio.h>

int main(void)
{
    int numbers[10] = {0}; 

    char subscript = '9'; 

    numbers[subscript - '0']++; /* We just incremented the value of the element at index 9 */
}