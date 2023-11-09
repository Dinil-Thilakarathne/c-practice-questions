#include <stdio.h>

int main(void){

    int image[5][5], i, j, square_count=0;

    for (i = 0; i < 5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("Enter your value (1/0): ");
            scanf("%d", &image[i][j]);
        }
        puts("");
    }
    
    for (i = 0; i < 5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d ", image[i][j]);
        }
        puts("");
    }

    for (i = 0; i < 4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(image[i][j] == 1 && image[i][j+1] == 1 && image[i+1][j] == 1 && image[i+1][j+1] == 1){
                square_count++;
            }
        }
    }

    puts("");
    printf("Number of 2 by 2 squares filled with all 1s = %d", square_count);
    
    return 0;
}
