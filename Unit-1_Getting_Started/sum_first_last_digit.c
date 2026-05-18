/*If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number*/

#include <stdio.h>
int main()
{
    int num,last_d,first_d,sum;
    printf("Enter a 4 Digit Number : ");
    scanf("%d",&num);
    last_d=num%10;
    first_d=num/1000;
    sum=last_d+first_d;
    printf("Sum of Last digit and First Digit is : %d",sum);

    return 0;
}
