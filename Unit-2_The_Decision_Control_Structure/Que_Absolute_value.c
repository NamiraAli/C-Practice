/*Find the absolute value of a number entered through the
keyboard*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if(num>=0)
        printf("The Absolute Value Of %d is : %d",num,num);
    else
        printf("The Absolute Value Of %d is : %d",num,num*-1);
        
}
