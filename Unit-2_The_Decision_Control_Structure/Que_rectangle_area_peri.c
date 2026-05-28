/*Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length = 5
and breadth = 4 is greater than its perimeter.*/

#include <stdio.h>
int main()
{
    int  l , b , area ,peri ;
    printf("Enter Length And Breadth of a Rectangle : ");
    scanf("%d %d",&l,&b);
    area=l*b;
    peri=2*(l+b);
    if(area>peri)
        printf("Area Is Greater Than Perimeter");
    else
        printf("Perimeter is Greater Than Area ");
}
