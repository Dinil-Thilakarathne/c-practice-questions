/*
Inverted Left Half Pyramid Pattern in C
*/

#include <stdio.h>

int main(void)
{
    // variable declration
    int row_count, i, k, j;

    // get user inputs 
    printf("Enter row count : ");
    scanf("%d", &row_count);

    for(i=0; i<row_count; i++)
    {

        for(j=i; j>0; j--)
        {
            printf(" ");
        }
        for(k=row_count; k>=1; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

