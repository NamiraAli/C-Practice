/*Example 2.6: Write a program to calculate the salary as per the
following table:
Gender Years of Service Qualifications Salary
Male >= 10 Post-Graduate 15000
>= 10 Graduate 10000
< 10 Post-Graduate 10000
< 10 Graduate 7000
Female >= 10 Post-Graduate 12000
>= 10 Graduate 9000
< 10 Post-Graduate 10000
< 10 Graduate 6000
*/

#include <stdio.h>
int main()
{
    int yos,qual,sal;
    char gender;

    printf("Enter Your Year Of Service , Sex :\n");
    scanf("%d %c",&yos,&gender);

    printf("Enter Your Qualification (0-Graduate / 1-PostGraduate): ");
    scanf("%d",&qual);

    if(gender=='M')
    {
        if(yos>=10)
        {
            if(qual==1)
                sal=15000;
            else
                sal=10000;
        }
        else
        {
            if(qual==1)
                sal=10000;
            else
                sal=7000;
        }

    }
    else if(gender=='F')
    {
        if(yos>=10)
        {
            if(qual==1)
                sal=12000;
            else
                sal=9000;
        }
        else
        {
            if(qual==1)
                sal=10000;
            else
                sal=6000;
        }

    }


    printf("Your salary : %d",sal);

}
