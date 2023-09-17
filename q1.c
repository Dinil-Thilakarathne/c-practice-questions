// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.

#include <stdio.h>

int main(void)
{
//	variables decalaration
	int height, width, perimeter;
	
	height = 7;
	width = 5;
	
//	calculate perimeter 
	perimeter = 2 * (height + width);
	
//	display outputs 
	printf("%d", perimeter);
	return 0;
}
