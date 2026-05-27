/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not*/
//palindrome

#include <stdio.h>
#include <string.h>
int main()
{
    int num , rev ,final=0 , store_num ;
    printf("Enter Number : ");
    scanf("%d",&num);
    store_num=num;
    while(num>0)
    {
        rev = (num % 10 );
        final = final+rev;
        final=final*10;
        num=num/10; //to get the number except the last one                       
    }
    final=final/10;
    printf("final number = %d\n",final);

    if( final == store_num)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
}
