/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line.*/

#include <stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    int y ,x ,z;
    int u,v,w;
    printf("Enter 3 cordinates : \n");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    //formula y2-y1/x2-x1=y3-y2/x3-x2
    y=y2-y1;
    x=x2-x1;
    z=y/x;
    u=y3-y2;
    v=x3-x2;
    w=u/v;
    if(z==w)
        printf("Its A Straight Line");
    else
        printf("Not A Straight line ");

}
