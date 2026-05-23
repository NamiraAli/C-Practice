/*While purchasing certain items, a discount of 10%
is offered if the quantity purchased is more than 1000. If quantity
and price per item are input through the keyboard, write a program
to calculate the total expenses.*/

#include <stdio.h>
int main()
{
    int quantity , money;
    float ondiscount,total;
    
    printf("Enter the quantity of the product : ");
    scanf("%d",&quantity);
    printf("Enter the cost of 1  product : ");
    scanf("%d",&money);
    total=money*quantity;
    if(total>=1000)
    {
        ondiscount=total-(total*10/100);
        printf("Your Final Price :- %f",ondiscount);
    }
    return 0;


}
