/*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees.*/

#include <stdio.h>
int main()
{
    float temp,celcius;
    printf("Enter your City Temperature in Fahrenheit : ");
    scanf("%f",&temp);
    celcius=(temp-32)*5/9; //change formula 
    printf("The Temperature in Celcius is : %.2f ",celcius);
    return 0;
} 
