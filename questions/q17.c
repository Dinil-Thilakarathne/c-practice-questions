/*
Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.
*/

#include <stdio.h>

int main(void)
{
//	variables decralation
	int x,y; 
	
//	get user inputs and asign them to x and y variables
	printf("Enter values of X and Y (separate by space): ");
	scanf("%d %d", &x, &y);
	
	if(x > 0 && y > 0){
		printf("The coordinate point (%d, %d) lies in the First quadrant.", x ,y);
	}else if(x < 0 && y > 0){
		printf("The coordinate point (%d, %d) lies in the Second quadrant.", x ,y);
	}else if(x < 0 && y < 0){
		printf("The coordinate point (%d, %d) lies in the Third quadrant.", x ,y);
	}else{
		printf("The coordinate point (%d, %d) lies in the Forth quadrant.", x ,y);
	}
	return 0;
}
