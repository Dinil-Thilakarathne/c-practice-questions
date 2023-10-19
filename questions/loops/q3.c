/*
Write a C program to calculate the factorial of a given number.
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
*/

#include <stdio.h>

int main(void)
{
    // declare variables 
    int num, i, fact;

    // get user input and asign its value to the num variable
    printf("Enter your number: ");
    scanf("%d", &num);
    
//    check the validation of the number( optional)

//    if (num == 0) {
//	  fact = 1;
//	} else if (num > 0) {
//	  fact = num;
//	} else {
//	  printf("not a valid number ");	
//	  return 0;
//	}
	
    fact = num ;
    
    for (i = 1; i < num; i++)
    {
        fact *= i;
    }

    printf("%d", fact);
    
    return 0;
}
