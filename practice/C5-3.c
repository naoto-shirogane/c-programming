#include <stdio.h>

int main(void)

{
    
    float commission, rivalCommission, valueShare, numberShares, 
    totalValueShares;

    printf("Number of shares: ");
    scanf("%f", &numberShares);
    
    printf("Price per share: ");
    scanf("%f", &valueShare);
    
    totalValueShares = numberShares * valueShare;

    if (totalValueShares < 0)
        printf("Incorrect input!");

    else
    {
        /* Original broker's commision */
    
        if (totalValueShares < 2500.00f )
            commission = 30.00f + .017f * totalValueShares;
        else if (totalValueShares < 6250.00f)
            commission = 56.00f + .0066f * totalValueShares;
        else if (totalValueShares < 20000.00f)
            commission = 76.00f + .0034f * totalValueShares;
        else if (totalValueShares < 50000.00f)
            commission = 100.00f + .0022f * totalValueShares;
        else if (totalValueShares < 500000.00f)
            commission = 155.00f + .0011f * totalValueShares;
        else
            commission = 255.00f + .0009f * totalValueShares;

        /* Broker rival's commission */

        if (numberShares < 2000)
            rivalCommission = 33.00f + .03f * numberShares;
        else
            rivalCommission = 33.00f + .02f * numberShares;
    
        printf("\nCommision: $%.2f\n", commission);
        printf("Rival commission: %.2f", rivalCommission);
    }

}
