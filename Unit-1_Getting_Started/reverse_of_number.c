/*If a five-digit number is input through the keyboard, write a
program to reverse the number*/
//using for loop only

#include<stdio.h>
int main()
{
    int value,reverse;
    int newval=0;
    printf("Enter a 5 digit Value to Reverse : ");
    scanf("%d",&value);
    for (int i=1 ; i<=4 ;i++)
    {
        reverse=value%10;
        newval=newval+reverse;
        newval=newval*10;
        value=value/10;

    }
    reverse=value%10;
    newval=newval+reverse;

    printf("Reverse Of The Number Is : %d",newval);
}
