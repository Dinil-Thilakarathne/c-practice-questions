/*
Write a program in C to store elements in an array and print them.
*/

#include <stdio.h>

int main(void)
{
//	declare variables 
    int arr[10], i, num;

//	get user inputs using for loop and asign them to arr
    for(i=0; i<10; i++)
    {
        printf("Enter your number: ");
        scanf("%d", &num);

        arr[i] = num;
    }

//	display arr items using for loop
    for(i=0; i<10; i++)
    {
        printf("%d, " , arr[i]);
    } 
    
    return 0;
}


