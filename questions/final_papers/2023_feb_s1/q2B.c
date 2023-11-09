#include <stdio.h>

int main(void)
{
    int sales[2][3]={0}, i, j, tot_Amount=0, tot_AmountsArr[2], max_tot_amout, max_tot_amout_person;

    for ( i = 0; i < 2; i++)
    {
        printf("Enter the sales amount of sales person %d.\n",i+1);
        for(j=0; j<3; j++)
        {
            printf("Product %d: ", j+1);
            scanf("%d", &sales[i][j]);
        }
        puts("");
    }
    for ( i = 0; i < 2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", sales[i][j]);
        }
        puts("");
    }

    for ( i = 0; i < 2; i++)
    {
        for(j=0; j<3; j++)
        {
            tot_Amount+=sales[i][j];
        }
        tot_AmountsArr[i]= tot_Amount;
    }

    max_tot_amout = tot_AmountsArr[0];


    for ( i = 0; i < 2; i++)
    {
        if(tot_AmountsArr[i] > max_tot_amout){
            max_tot_amout = tot_AmountsArr[i];
            max_tot_amout_person = i;
        }
    }
    
    printf("The sales person with the highest sales amount is sales person %d\n", max_tot_amout_person+1);
    return 0;
}