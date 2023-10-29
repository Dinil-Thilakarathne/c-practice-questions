#include <stdio.h>

int main(void)
{
    // declare variables 
    int Smatrix[4][4], i, j, equal_num_count=0;

    // get user input for Smatrix array values 
    for (i = 0; i < 4; i++)
    {
        printf("Values for row%d\n", ++i);
        i--;
        for(j=0; j<4; j++)
        {
            printf("Enter element %d : ", ++j);
            j--;
            scanf("%d", &Smatrix[i][j]);
        }
        puts(""); // break line
    }

    // display matrix 
    printf("Matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",Smatrix[i][j]);
        }
        puts("");
        
    }

    // check if the matrix is symmetric or not 
    for (i = 0; i < 4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(i!=j){
                if(Smatrix[i][j] == Smatrix[j][i]){
                    equal_num_count++;
                }
            }
        }  
    }

    puts(""); // break line

    // display an appropriate message if the matrix is symmetric or not 
    if (equal_num_count == 12)
    {
        printf("This matrix is a symmetric matrix\n");
    }else{
        printf("This matrix is not a symmetric matrix\n");
    }
    
    
    return 0;
}
