/*
Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

The pattern like :

   1 
  2 3 
 4 5 6 
7 8 9 10 
*/

#include <stdio.h>

int main(void)
{
    // declare variables 
    int row_count, i, j, k, num =1;

    // get user input and asign its values to the row_count variable
    printf("Enter your number: ");
    scanf("%d", &row_count);

    for ( i = 1; i <= row_count; i++)
    {
//    	print spaces 
        for ( k = 1; k <= (row_count - i); k++)
        {
            printf(" ");
        }
        
//        print number 
        for ( j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
        
    }
    
    return 0;
}
