/*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/

#include <stdio.h>

int main()
{
    float salary , da , hra , gs;

    printf("Enter your Salary : ");
    scanf("%f",&salary);

    da = salary * 0.40;
    hra = salary * 0.2;
    gs= da + hra + salary;

    printf("your gross salary is :: %.2f",gs);
    return 0;

}
