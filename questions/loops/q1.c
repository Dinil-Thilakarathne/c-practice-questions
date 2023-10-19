/*
Write a program in C to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/

#include <stdio.h>

int main(void)
{
    // declare variables 
    int num, i;

    // get user input and asign value to num variable 
    printf("Enter your number: ");
    scanf("%d", &num);

    for ( i = 1; i <= num; i++)
    {
        printf("%d X %d = %d\n", num, i , num * i);
    }

    return 0;
    
}
