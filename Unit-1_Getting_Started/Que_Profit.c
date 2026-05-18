/*If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item.*/

#include <stdio.h>
int main()
{
    int buy,sell_price,profit,one_item;
    printf("Enter The Total Selling Price Of 15 Items : ");
    scanf("%d",&sell_price);
    printf("Enter The Profit : ");
    scanf("%d",&profit);

    //buy=100, sell=150 , profit 50
    buy=sell_price-profit;
    one_item=buy/15;
    printf("YOUR TOTAL BUYING PRICE IS : %d",buy);
    printf("\nCOST FOR 1 ITEM : %d",one_item);


}
