#include <stdio.h>

int main(void)
{
    int num_days, starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &num_days);

    printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &starting_day);

    for (int i = 1; i < starting_day; i++) // checks to see at which spot should the first day appear
    {
        printf("   ");
    }

    for (int i = 0; i < num_days; i++)
    {
        printf("%3d", i + 1);
        if ((i + starting_day) % 7 == 0) // checks if a week has passed
        {
            printf("\n");
        }
    }
}