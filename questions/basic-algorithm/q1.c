/*
Write a C program to compute the sum of the three given integers with some exceptions.
If any of the values is in the range 10..20 inclusive, then that value will be considered as 0, except for 13 and 17.
*/

#include <stdio.h>

int main(void)
{
//	variables declarations
	int num, sum, count;
	
//	get user inputs three times 
	for(count=0 ; count <3; count++){
		printf("Enter your number : ");
		scanf("%d", &num);
		
//		check if the input is valid 
		if((num > 10 && num <20) && (num!=13 && num!=17)){
			num = 0;
		}
		sum+=num;
	}
	
//	display output 
	printf("%d", sum);
	return 0;
}
