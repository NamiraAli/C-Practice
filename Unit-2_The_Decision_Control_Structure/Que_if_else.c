/*If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.*/

#include <stdio.h>
int main()
{
    int sell , cost , profit ,loss ;
    printf("Enter Your Selling Price and Cost Price : ");
    scanf("%d %d",&sell,&cost);
    
    if(sell>=cost)
    {
        printf("You Made a Profit !!\n");
        profit = sell - cost ;
        printf("Profit = %d \n",profit);
    }
    else
    {
        printf("You Are In Loss Stupid !!\n");
        loss = cost - sell;
        printf("Loss = -%d",loss);
    }
    return 0;
}
