/*If his basic salary is less than Rs. 1500, then HRA = 10% of basic
salary and DA = 90% of basic salary. If his salary is either equal to
or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic
salary. If the employee's salary is input through the keyboard write
a program to find his gross salary*/

#include<stdio.h>
int main()
{
    float salary , gross_salary;
    float hra , da ;
    printf("Enter Your Salary : ");
    scanf("%f",&salary);
    if (salary<1500)
    {
        hra = salary * 10 / 100;
        da = salary * 90 / 100;
    }
    else
    {
        hra = 500;
        da = salary * 98 /100;
    }
    gross_salary=salary+hra+da;
    printf("HRA = %.2f \nDA = %.2f ",hra,da);
    printf("\nGROSS SALARY = %.2f",gross_salary);

    return 0;
}
