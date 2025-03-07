#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
    int firstSum, secondSum, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    firstSum = i2 + i4 + i6 + i8 + i10 + i12;
    secondSum = i1 + i3+ i5+ i7 + i9 + i11;

    total = secondSum + firstSum * 3;
    --total;
    total %= 10;
    total = 9 - total;

    printf("Check digit: %d", total);
    
}