#include <stdio.h>

int main(void)
{
    int userRating[5]= {0};
    int i, j, rating;

    while(i< 5)
    {
        printf("Enter user rating (between 1 - 5) : ");
        scanf("%d", &rating);

        if (rating > 5 || rating < 1)
        {
            printf("Please enter valid number!\n");
            continue;
        }


        userRating[i] = rating;
        i++;

    }

    for ( i = 0; i < 5; i++)
    {
        for (j = 0; j < userRating[i]; j++)
        {
            printf("*");
        }
        puts(""); 
        
    }

    return 0;
}
