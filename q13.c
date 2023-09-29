/*
Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
Test Data :
Input an integer: 13
Expected Output:
Positive Odd
*/

#include <stdio.h>

int main(void)
{
//	variables declarations 
	int num;
	
//	get user input 
	printf("Enter your number : ");
	scanf("%d", &num);
	
//	display output 
	if(num >= 0){
		(num %2 ==0) ? printf("Positive even") : printf("Positive odd");
	}else{
		(num % 2 == 0) ? printf("Negative even") : printf("Negative odd");
	}
	
	return 0;
}
