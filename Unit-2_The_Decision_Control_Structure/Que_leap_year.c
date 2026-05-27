/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not*/
#include <stdio.h>
int main()
{
    int year ;
    printf("Enter Year to Know if Leap Year Or not !! ::");
    scanf("%d",&year);
    //It is divisible by 4
    //But if it is divisible by 100, then it must also be divisible by 400
    if(year%4==0 ||( year%100==0 && year%400==0) )    
        printf("Its a leap Year ..... ");    
    else
        printf("its not !!");
    return 0;

}
