#include <stdio.h>
#include <math.h>

int main(void)
{
    float change; // remainder1, remainder2, remainder3; //remainder1, remainder2, remainder3; //quarters, dimes, nickels, pennies, total_coins;  // make this a double double? so we can round downtotal_coins;
    int temp, quarters, dimes, nickels, pennies, total_coins, remainder1, remainder2, remainder3;


    //prompt user for total cash to work with
    do
    {
        scanf("%f", &change);
    }
    while (change < 0);

    //operation to go through quarters and onwards
    temp = round(change * 100.00);
    {
        quarters = (temp / 25.00);
        remainder1 = temp - (quarters * 25.00);
        dimes = (remainder1 / 10.00);
        remainder2 = remainder1 - (dimes * 10.00);
        nickels = (remainder2 / 5.00);
        remainder3 = remainder2 - (nickels * 5.00);
        pennies = (remainder3 / 1.00);
    }
    //add the coins up
    total_coins = quarters + dimes + nickels + pennies;

    //print out results
    printf("%d\n", total_coins);
}