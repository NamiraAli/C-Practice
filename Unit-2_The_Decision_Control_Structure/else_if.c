#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    float per;

    printf("Enter Your Marks : \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    per =(a+b+c+d+e)/5;
    printf("\n Percentage = %.2f\n",per);

    if (per>=90 && per <100)
        printf("First Division");
    else if (per >=70)
        printf("Second Division");
    else if (per >=50)
        printf("Third Division");
    else if (per >=30)
        printf("Very Bad");
    else
        printf("Fail");
}
