/*Given the coordinates (x, y) of a center of a circle and it’s radius,
write a program which will determine whether a point lies inside
the circle, on the circle or outside the circle.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,radius,p1,p2;
    float dis,point_dis;
    printf("Enter The Cordinates Of Circle X,Y :");
    scanf("%d %d",&x,&y);
    printf("Enter The Radius : ");
    scanf("%d",&radius);
    printf("Enter Cord of A point :");
    scanf("%d %d",&p1,&p2);
    //compare the distance from the center of the circle to the point with the circle's radius. 
    //distance formula: \|(p1-x)^2+(p2-y)^2 ==> inside d<radius ,on d==r ,outside d>r
    dis=(p1-x)*(p1-x)+(p2-y)*(p2-y);
    point_dis=sqrt(dis);

    printf("distance = %.2f \n",point_dis);
    if(point_dis<radius)
        printf("Point is Inside the Cirle");
    else if (point_dis == radius)
        printf("Point is On The Circle ");
    else
        printf("Point is Outside The Circle");

}
