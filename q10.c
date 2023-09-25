/*
Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.
Test Data :
Input the first number: 25
Input the second number: 15
Input the third number: 35
Expected Output:
Perimeter = 75.0
*/

#include <stdio.h>

int main(void)
{
//	variables declarations
	float value_1 , value_2, value_3 , perimeter;
	
//	get user inputs 
	printf("Input the first value: ");
	scanf("%f", &value_1);
	
	printf("Input the second value: ");
	scanf("%f", &value_2);
	
	printf("Input the third value: ");
	scanf("%f", &value_3);
	
//	calculate perimeter if the 3 values are valid
	if((value_1 + value_2) > value_3 || (value_2 + value_3) > value_1 || (value_1 + value_3) > value_2 ){
		perimeter = value_1 + value_2+ value_3;
	}
	
//	display output 
	printf("%.2f", perimeter);
	return 0;
}
