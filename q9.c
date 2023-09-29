/*
Write a C program that reads 5 numbers and sums all odd values between them.
Test Data :
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Input the fifth number: 5
Expected Output:
Sum of all odd values: 46
*/

#include <stdio.h>

int main(void)
{
//	variables declarations 
	int num_1, num_2, num_3, num_4, num_5, sum;
	
//	get user inputs 
	printf("Input the first number: ");
	scanf("%d", &num_1);
	
	printf("Input the second number: ");
	scanf("%d", &num_2);
	
	printf("Input the third number: ");
	scanf("%d", &num_3);
	
	printf("Input the fourth number: ");
	scanf("%d", &num_4);
	
	printf("Input the fifth number: ");
	scanf("%d", &num_5);
	
	if(num_1 % 2 !=0){
		sum+=num_1;
	}
	if(num_2 % 2 !=0){
		sum+=num_2;
	}
	if(num_3  % 2 !=0){
		sum+=num_3;
	}
	if(num_4 % 2 !=0){
		sum+=num_4;
	}
	if(num_5 % 2 != 0){
		sum+=num_5;
	}
	
	printf("Sum of all odd values: %d", sum);
	return 0;
}
