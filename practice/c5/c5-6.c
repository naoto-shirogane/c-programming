/* c5-6.c

  Rafael Bonilla
  March 14, 2025
   
  C Programming: A Modern Approach, Second Edition
  Chapter 5, Programming Project 6

  Modify the upc.c program of Section 4.1 so that it checks
  whether a UPC is valid. After the user enters a UPC, the
  program will display either VALID or NOT VALID.

*/

#include <stdio.h>

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
  int first_sum, second_sum, total, checkDigit, valid;

  printf("Enter the first (single) digit: ");
  scanf("%1d", &d);

  printf("Enter first group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

  printf("Enter second group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

  printf("Enter the last (single) digit: ");
  scanf("%d", &checkDigit);

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;
  valid = 9 - ((total - 1) % 10);

  if (checkDigit != valid)
  {
    printf("NOT VALID");
  }

  else
  {
    printf("VALID");
    printf("Check digit: %d\n", valid);
  }
}
