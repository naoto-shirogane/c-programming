/* #include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    float valuePolynomial;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    valuePolynomial = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;

    printf("%.2f", valuePolynomial);
} */

/* #include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    float valuePolynomial;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    valuePolynomial = (((((3 * x + 2)* x - 5)* x - 1)* x + 7)* x - 6);

    printf("%.2f", valuePolynomial);
} */

/* #include <stdio.h>

int main(void)
{
    int amount = 20;
    int twentyBucks = 0, tenBucks = 0, fiveBucks = 0, oneBuck = 0;

    printf("Enter the dollar amount: ");
    scanf("%d", &amount);

    while (amount > 0)

    {
        if (amount >= 20)
        {
            twentyBucks++;
            amount = amount - 20;
        }
        else if (amount >= 10)
        {
            tenBucks++;
            amount = amount - 10;
        }
        else if (amount >= 5)
        {
            fiveBucks++;
            amount = amount - 5;
        }
        else if (amount >= 1)
        {
            oneBuck++;
            amount = amount - 1;
        }
    }
    printf("$20 bills: %d\n", twentyBucks);
    printf("$10 bills: %d\n", tenBucks);
    printf("$5 bills: %d\n", fiveBucks);
    printf("$1 bills: %d\n", oneBuck);
} */

/* #include <stdio.h>

int main(void)
{
    float amountLoan = 0;
    float interestRate = 0;
    float monthlyPayment = 0;
    
    float balance = 0;
    float result = 0;

    int counter = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &amountLoan);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    interestRate = (interestRate / 100.00f) / 12.00f;
    balance = amountLoan - monthlyPayment;
    result = balance;

    while (counter < 3)
    {
        result = result + (result * interestRate);
        printf("%d. %.2f\n", counter, result);
        result = result - monthlyPayment;
        counter++;
    }
} */

/* #include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, resultNum, resultDenom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d / %d+%d / %d", &num1, &denom1, &num2, &denom2);
    resultNum = num1* denom2 + num2 * denom1;
    resultDenom = denom1 * denom2;

    printf("The sum is %d/%d", resultNum, resultDenom);

 } */

/* #include <stdio.h>

int main(void)
{
    int day = 0, year = 0, month = 0;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &year, &month);
    printf("You entered the date %d%d%d", day, year, month);
} */
/*
#include <stdio.h>

int main(void)
{
   int itemNum = 0, day = 0, year = 0, month = 0;
   float unitPrice = 0.0f;

   printf("Enter item price: ");
   scanf("%d", &itemNum);

   printf("Enter unit price: ");
   scanf("%f", &unitPrice);

   printf("Enter purchase date (mm/dd/yyyy): ");
   scanf("%d/%d/%d", &month, &day, &year);

   printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%-8d$%7.2f\t%d/%d/%d", itemNum, unitPrice, month, day, year);
} */

/* #include <stdio.h>

int main(void)
{
    int GS1 = 0, groupID = 0, 
    publisherCode = 0, itemNum = 0, 
    checkDigit = 0;  

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1, &groupID, 
        &publisherCode, &itemNum, &checkDigit);
    printf("GS1 prefix: %d\n", GS1);
    printf("Group identifier: %d\n", groupID);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d", checkDigit);
} */

/* #include <stdio.h>

int main(void)
{
    int first = 0, second = 0, last = 0;
    printf("Enter a telephone number in the following form (XXX) XXX-XXXX: ");
    scanf("(%d) %d-%d", &first, &second, &last);
    printf("You entered: %d.%d.%d", first, second, last);
} */

/* #include <stdio.h>

int main(void)
{
    int one = 0, two= 0, three = 0, four = 0, 
    five = 0, six = 0, seven = 0, eight = 0,
    nine = 0, ten = 0, eleven = 0, twelve = 0, 
    thirteen = 0, fourteen = 0, fifteen = 0, sixteen = 0;

    int firstRow = 0, secondRow = 0, thirdRow = 0, fourthRow = 0;

    int firstColumn = 0, secondColumn = 0, thirdColumn = 0, fourthColumn = 0;

    int firstDiagonal = 0, secondDiagonal = 0;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);
    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen);

    firstRow = one + two + three + four;
    secondRow = five + six + seven + eight;
    thirdRow = nine + ten + eleven + twelve;
    fourthRow = thirteen, fourteen, fifteen, sixteen;

    firstColumn =  one + five + nine + thirteen;
    secondColumn = two + six + ten + fourteen;
    thirdColumn = three + seven + eleven + fifteen;
    fourthColumn = four + eight + twelve + sixteen;

    firstDiagonal = one + six + eleven + sixteen;
    secondDiagonal = thirteen + ten + seven + four;

    printf("Row sums: %d %d %d %d\n", firstRow, secondRow, thirdRow, fourthRow);
    printf("Column sums: %d %d %d %d\n",firstColumn, secondColumn, thirdColumn, fourthColumn);
    printf("Diagonal sum: %d %d", firstDiagonal, secondDiagonal);

} */

/* #include <stdio.h>

int main(void)
{
    int firstRow[4];
    int secondRow[4];
    int thirdRow[4];
    int fourthRow[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &firstRow[i]);
    }

    for (int i = 0; i < sizeof(firstRow) / sizeof(firstRow[0]); i++)
    {
        printf("%d", firstRow[i]);
    }
       
} */

/* #include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5,
    j1, j2, j3, j4, j5, firstSum, secondSum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    firstSum = d + i2 + i4 + j1 + j3 + j5;
    secondSum = i1 + i3 + i5 + j2 + j4;
    total = 3 * firstSum + secondSum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
} */
/* #include <stdio.h>

int main(void)
{
    int number = 0;
    int remainingDigits = 0, secondToLastDigit = 0, lastDigit = 0;

    printf("Enter a 3 digit number: ");
    scanf("%d", &number);

    lastDigit = number % 10;
    remainingDigits = number / 10;
    secondToLastDigit = remainingDigits % 10;
    remainingDigits = remainingDigits / 10;
    
    printf("The reversal is %d%d%d", lastDigit, secondToLastDigit, remainingDigits);

} */

/* #include <stdio.h>

int main(void)
{
    int firstDigit = 0, secondDigit = 0, lastDigit = 0;

    printf("Enter a 3 digit number: ");
    scanf("%1d%1d%1d", &firstDigit, &secondDigit, &lastDigit);
    
    printf("%d%d%d", lastDigit, secondDigit, firstDigit);
} */

#include <stdio.h>

int main(void)
{
    int input, d1, d2, d3, d4, d5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input);

    d5 = input % 8;
    input /= 8;

    d4 = input % 8;
    input /= 8;

    d3 = input % 8;
    input /= 8;

    d2 = input % 8;
    input /= 8;

    d1 = input % 8;
    
    printf("In octal, your number is: %1d%1d%1d%1d%1d\n\n", d1, d2, d3, d4, d5);    
/* #include <stdio.h>

int main(void)
{
    ;
} */



    

}