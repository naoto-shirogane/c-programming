/* c5-3.c

   Rafael Bonilla
   March 24, 2025
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 3

   Modify the broker.c program of Section 5.2 by making
   both of the following changes:

   a. Ask the user to enter the number of shares and the
      price per share, instead of the value of the trade.

   b. Add statements that compute the commission charged by
      a rival broker ($33 plus 3 cents per share for fewer
      than 2000 shares; $33 plus 2 cents per share for 2000
      shares or more. Display the rival's commission as well
      as the commission charged by the original broker.

*/

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
    {
        printf("Incorrect input!");
    }

    else
    {
        /* Original broker's commision */
    
        if (totalValueShares < 2500.00f )
        {
            commission = 30.00f + .017f * totalValueShares;
        }
            
        else if (totalValueShares < 6250.00f)
        {
            commission = 56.00f + .0066f * totalValueShares;
        }
            
        else if (totalValueShares < 20000.00f)
        {
            commission = 76.00f + .0034f * totalValueShares;
        }
            
        else if (totalValueShares < 50000.00f)
        {
            commission = 100.00f + .0022f * totalValueShares;
        }
            
        else if (totalValueShares < 500000.00f)
        {
            commission = 155.00f + .0011f * totalValueShares;
        }
            
        else
        {
            commission = 255.00f + .0009f * totalValueShares;
        }

        /* Broker rival's commission */

        if (numberShares < 2000)
        {
            rivalCommission = 33.00f + .03f * numberShares;
        }
            
        else
        {
            rivalCommission = 33.00f + .02f * numberShares;
        }
            
        printf("\nCommision: $%.2f\n", commission);
        printf("Rival commission: %.2f", rivalCommission);
    }
}
