/*
Write a C program to check whether a triangle can be formed with the given values for the angles.
Test Data :
40 55 65
Expected Output :
The triangle is not valid.
*/
#include <stdio.h>

int main(void)
{
//	variable declarations
	int value_1 , value_2, value_3;
	
//	get user input for 3 values 
	printf("Enter your first value :");
	scanf("%d", &value_1); 
	
	printf("Enter your second value :");
	scanf("%d", &value_2); 
	
	printf("Enter your third value :");
	scanf("%d", &value_3); 

//	check if the triangle is valid or not 
	if((value_1 + value_2 + value_3) == 180){
		printf("The triangle is valid.");
	}else{
		printf("The triangle is not valid.");
	}
	
	return 0;
}
