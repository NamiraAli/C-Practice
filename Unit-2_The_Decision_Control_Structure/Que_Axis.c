/*Given a point (x, y), write a program to find out if it lies on the
x-axis, y-axis or at the origin, viz. (0, 0).*/
#include<stdio.h>
int main()
{
    int x , y;
    printf("Enter Cordinates X and Y :");
    scanf("%d %d",&x,&y);
    if(x==0 && y!=0)
        printf("On Y Axis");
    else if (y==0 && x!=0)
        printf("On X Axis");
    else if(x==0 && y==0)
        printf("At origin !!");
    else
        printf("(%d,%d)",x,y);
}
