/*The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.*/

#include <stdio.h>
int main()
{
    float length , breadth , radius ;
    float area_r , peri , circum , area_c;
    printf("Enter Length of The Rechtangle : ");
    scanf("%f",&length);
    printf("Enter Breadth of The Rechtangle : ");
    scanf("%f",&breadth);
    area_r=length*breadth;
    peri=2*(length+breadth);
    printf("AREA OF RECTANGLE : %.2f \nPERIMETER OF RECTANGLE : %.2f \n",area_r,peri);
    printf("Enter the Radius of The Circle : ");
    scanf("%f",&radius);
    area_c=3.14*radius*radius;
    circum=2*3.14*radius;
    printf("AREA OF CIRCLE IS : %.2f \nCIRCUMFERENCE OF THE CIRCLE IS :%,2f ",area_c,circum);

    return 0;


    
}
