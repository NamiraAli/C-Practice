/*If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.*/

#include <stdio.h>
int main()
{
    int ram , shyam , ajay ;
    printf("Enter Ages of Ram Shyam And Ajay :: ");
    scanf("%d %d %d",&ram ,&shyam , &ajay);

    if(ram<shyam)
        if(ram<ajay)
            printf("Ram is The Youngest");
        else
            printf("Ajay is The Youngest");
    else
        if(shyam<ajay)
            printf("Shyam is The Youngest");
        else
            printf("Ajay is the Youngest");
}
