/*A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.*/

#include<stdio.h>
int main()
{
    int money , for_50 , for_100 , for_10;
    int notes;
    printf("Enter The Amount In Multiples of 100 Please : ");
    
    scanf("%d",&money);
   

    printf("Cashier has 100 , 50 , 10 rs Notes Available !!\n ");
       
        for_100=money/100; //1200 /100=12 //150 //190 >> 1
        money=money-for_100*100; // 150 -> 1*100 =100-150 =50 //190-100=90
        for_50 =money/50; // 50/50=1 // 90 >> 90/50 ==1
        if(for_50==1)
        {
            money=money-50;
        }
        else(money<50);
        {
            for_10=money/10; // 40/10=4
        }
        for_10=money/10;

       

        printf("YOU GET 100 : %d \n50 : %d \n10 : %d ",for_100,for_50,for_10);
        
        

    


}
