// Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
// logic : avg = ((item1_weight * item1_value) + (item2_weight * item2_value)) / (item1_value + item2_value)

#include <stdio.h>

int main(void)
{
//	decalre variables 
	float item1_weight ,item1_value, item2_weight, item2_value , tot_value , avg;
	
//	get user inputs 
	printf("Enter weight - item1: ");
	scanf("%f", &item1_weight);
	
	printf("No. of item1: ");
	scanf("%f", &item1_value);
	
	printf("Enter weight - item2: ");
	scanf("%f", &item2_weight);
	
	printf("No. of item2: ");
	scanf("%f", &item2_value);
	
//	calculate total value of item1 and item2
	tot_value = item1_value + item2_value;
	
//	calculate avg 
	avg = ((item1_weight * item1_value) + (item2_weight * item2_value)) / tot_value;
	
	printf("Average Value = %f", avg);
	
	return 0;
}
