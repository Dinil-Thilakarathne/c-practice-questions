#include <stdio.h>

int main(void)
{
    int i, j, identityArr[4][4], correct_elements=0;

    for ( i = 0; i < 4; i++)
    {
        printf("VAlues for row%d\n", i+1);
        for(j=0; j< 4; j++)
        {
            printf("Enter element %d: ", j+1);
            scanf("%d", &identityArr[i][j]);
        }
        puts("");

    }
    puts("");

    for ( i = 0; i < 4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", identityArr[i][j]);
        }
        puts("");
    }

    for ( i = 0; i < 4; i++)
    {
        for(j=0; j<4; j++)
        {
            if (identityArr[j][j] == 1 || identityArr[i][j] == 0)
            {
                correct_elements++;
            }
             
        }
    }

    puts("");
    
    if (correct_elements == 16)
    {
        printf("This is an identity matrix.\n");
    }else{
        printf("This is not an identity matrix.\n");
    }
    
    

    
    return 0;
}
