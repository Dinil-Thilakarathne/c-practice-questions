// Write a C program to compute the perimeter and area of a circle with a given radius.

#include <stdio.h>

int main(void)
{
	float radius,perimeter,area;
	
//	with a given value
//	radius= 7.0;
	
//	with user input 
	printf("Enter value of radius: ");
	scanf("%f", &radius);
	
//	calculate perimeter
	perimeter = 2.0 * (22.0 / 7.0 ) * radius;
	
//	calculate area
	area = (22.0 / 7.0) * radius * radius;
	
//	display outputs 
	printf("Permiter of circle is: %f\nArea of circle is: %f", perimeter , area);
	return 0;
}
