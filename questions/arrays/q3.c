#include <stdio.h>

int main(void)
{
    int image[4][4];
    int i, j, row_index, column_index;

    row_index = 0;
    for (i = 1; i <= 4; i++)
    {
        printf("Values for row%d\n",i);
        column_index = 0;
        for ( j = 1; j <= 4; j++)
        {
            printf("Enter element %d : ",j);
            scanf("%d", &image[row_index][column_index]);

            column_index++;
        }
        puts("");
        row_index++;
        
    }

    for (i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ", image[i][j]);   
        }
        puts("");
    }

    puts("");
    
    for (i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if (image[i][j] > 55){
                image[i][j] = 1;
            }
            else{
                image[i][j] = 0;
            }
            
        }
    }
    

    for (i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ", image[i][j]);   
        }
        puts("");
    }
    
    return 0;
}
