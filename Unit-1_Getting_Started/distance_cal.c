/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters*/

#include <stdio.h>

int main()
{   
    float distance;
    float meter , feet , inches , cm;
    printf("Enter The Distance Between Two Cities in KM : ");
    scanf("%f", &distance);

    // 1 km =1000m
    meter = distance * 1000;
    // 1 km =1000m and 1m =100cm :: 1km =100*1000cm
    cm = distance * 100 *1000;
    // 1km = 3280.84 feet
    feet = distance * 3280.84;
    //1 km = 39370.1 inch
    inches = distance * 39370.1;

    printf("In METER : %.2f \n",meter);
    printf("In CENTIMETER : %.2f \n",cm);
    printf("In INCHES : %.2f \n",inches);
    printf("In FEET : %.2f \n",feet);

    return 0;

}
