/*
Write a C program that reads two integers and checks whether they are multiplied or not.
Test Data :
Input the first number: 5
Input the second number: 15
Expected Output:
Multiplied!
*/

#include <stdio.h>

int main(void)
{
//	variables declarations 
	int num_1, num_2;
	
//	get user inputs 
	printf("Input the first number: ");
	scanf("%d", &num_1);
	
	printf("Input the second number: ");
	scanf("%d", &num_2);
	
//	display output 
	(num_2 % num_1 == 0) ? printf("Multiplied") : " ";
	
	return 0;
}
