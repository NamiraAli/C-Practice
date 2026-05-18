/*Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/

#include <stdio.h>

int main()
{
    int x,y,a;
    printf("Enter two values for X and Y : ");
    scanf("%d %d",&x,&y);

    printf("Value of X is : %d \nValue of Y is :%d",x,y);
    a=x;
    x=y;
    y=a;
    printf("\n\nValue of X is :%d\nValue of Y is :%d",x,y);

    return 0;

}
