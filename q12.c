/*
Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
*/

#include <stdio.h>

int main(void)
{
//	variables declarations 
	int negative_num_count=0 , positive_num_count=0 , num , count;
	
	for(count=0; count<5 ; count++)
	{
//		get user inouts 
		printf("Enter your number : ");
		scanf("%d", &num);
		
//		using ternary opeation
		(num >=0 ) ? positive_num_count++ : negative_num_count++;
		
//		using if else 
//		if(num >= 0){
//			positive_num_count++;
//		}else{
//			negative_num_count++;
//		}
		

	}
	
//	display outputs
	printf("%d\n", positive_num_count);
	printf("%d", negative_num_count);
	

	return 0;
}
