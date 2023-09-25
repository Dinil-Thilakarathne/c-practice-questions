/*
Write a C program that accepts three integers and finds the maximum of three
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/

#include <stdio.h>

int main(void)
{
//	variables declarations 
	int num1, num2, num3, max_num;
	
//	get user inputs 
	printf("Input the first integer: ");
	scanf("%d", &num1);
	
	printf("Input the second integer: ");
	scanf("%d", &num2);
	
	printf("Input the third integer: ");
	scanf("%d", &num3);
	
//	calculate max numer using ternary conditional operators 
	max_num = (num2 > num1) ? ((num2 > num3) ? num2 : num3) : (num1> num3)? num1 : num3;

//	calculate max numer using if else conditional operators 
//	if(num2 > num1 ){
//		if(num2 > num3){
//			max_num = num2;
//		}else{
//			max_num = num3;
//		}
//	}else if(num1 > num3){
//		max_num = num1;
//	}else{
//		max_num = num3;
//	}
	
//	display output
	printf("Maximum value of three integers: %d", max_num);
	
	return 0;
}
