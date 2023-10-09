/*
Write a C program to compute the sum of the two given integers. 
Return 18 if one of the integer values given is in the range 10..20 inclusive.
*/

#include <stdio.h>

int main(void)
{
//	variable declaration
	int num1, num2;
	
//	get user inputs 
	printf("Enter your two numbers (separate by one space): ");
	scanf("%d %d", &num1, &num2);

//	check the giving inputs and display output
	if((num1 / 10 == num2 /2 || num1 / 10 == num2 % 10) || (num1 % 10 == num2 % 10 || num1 % 10 == num2 / 10 ))
		printf("true");
	else{
		printf("false");
	}
	
	return 0;
}
