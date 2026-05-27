/*According to the Gregorian calendar, it was Monday on the
date 01/01/1900. If any year is input through the keyboard
write a program to find out what is the day on 1st January of
this year.*/
#include <stdio.h>
int main()
{
    int year , first , days=0;
    printf("enter the year ");
    scanf("%d",&year);
    for (int i=1900 ; i < year ; i++)
    {
        if (i%4==0 && i%100!=0 || (i%400==0))
            days=days+366; //leap year 
        else
            days=days+365; //non leap year
    }
    days=days%7;
    printf("The Day on 1st Of jan On %d is ",year);
    if(days==0)
        printf("monday");
    else if (days ==1)
        printf("Tuesday");
    else if (days ==2)
        printf("Wednesday");
    else if (days ==3)
        printf("Thursday");
    else if (days ==4)
        printf("Friday");
    else if (days ==5)
        printf("Saturday");
    else if (days ==6)
        printf("Sunday");
    else
        printf("Something wrong ");

}
