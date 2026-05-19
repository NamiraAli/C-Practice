/*If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402.*/

#include <stdio.h>

int main()
{
    int num, newnum = 0;
    int digit, place = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        digit = num % 10; //gets last digit

        if(digit == 9)
        {
            digit = 0;
        }
        else
        {
            digit = digit + 1;
        }

        newnum = newnum + (digit * place); //use place value every time place *10

        place = place * 10;

        num = num / 10;
    }

    printf("New number = %d", newnum);

    return 0;
}
