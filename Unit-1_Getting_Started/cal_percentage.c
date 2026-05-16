/*If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.*/

#include <stdio.h>

int main()
{
    int math , ml , ai , cc,cn;
    float aggregate , percentage;
    printf("Enter Your Marks For Math : ");
    scanf("%d",&math);

    printf("Enter Your Marks For Machine Learning : ");
    scanf("%d",&ml);

    printf("Enter Your Marks For Artificial Intelligence : ");
    scanf("%d",&ai);

    printf("Enter Your Marks For Cloud Computing : ");
    scanf("%d",&cc);

    printf("Enter Your Marks For Computer Networks : ");
    scanf("%d",&cn);

    aggregate = math + ml + ai + cc + cn;

    printf("\nAggregate Marks : out of 500 : %.2f\n",aggregate);

    percentage=aggregate/500*100;

    printf("YOUR FINAL PERCENTAGE IS : %.2f ",percentage);

    return 0;



}
