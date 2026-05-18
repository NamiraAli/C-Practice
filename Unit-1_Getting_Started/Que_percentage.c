/*In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total numberof
illiterate men and women if the population of the town is 80,000.*/

#include <stdio.h>
int main()
{
    //given:
    float percentage_men=52 , number_men , number_women_literate;
    float total_literacy=48 , number_literate;
    float literate_men=35 ,number_literate_men ;
    float illiterate_men , illiterate_women;
    float total=80000;

    number_literate=total_literacy/100*80000;
    printf("Total Number Of Literate : %.2f\n",number_literate);

    number_men=(percentage_men/100)*80000;
    printf("Total number of men : %.2f \n",number_men);

    number_literate_men= literate_men/100*80000;
    printf("Number Of Litterate men : %.2f\n",number_literate_men);

    number_women_literate = number_literate - number_literate_men;
    printf("Number of women Literate : %.2f\n",number_women_literate);

    illiterate_men=number_men-number_literate_men;
    illiterate_women=80000-number_men-number_women_literate;
    printf("\n\nILLETARATE MEN :%.1f \nILLITERATE WOMEN :%.1f",illiterate_men,illiterate_women);


}
