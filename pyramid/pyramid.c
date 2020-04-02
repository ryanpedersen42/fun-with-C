#include <stdio.h>

int main(void)
{
    //prompt user for positive number ("Height"), which will remain included as n
    int n;
    do
    {   
        printf("Enter a number between 1 and 10 (it will be height of the super mario pyramid): \n");
        scanf("%d", &n);
    }
    //set range for acceptable positive numbers (0-23 are acceptable)
    while (n < 0 || n > 10);
    //print out this many rows
    for (int i = 0; i < n; i++)
    {
        //print out this many colums
        for (int j = 0; j < (n - i - 1); j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}