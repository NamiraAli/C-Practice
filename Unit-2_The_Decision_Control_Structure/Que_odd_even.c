/*Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number Lets Find Out if Even or Odd :: ");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("Its even !!");
    }
    else
    {
        printf("Its odd !!");
    }
    return 0;
}
