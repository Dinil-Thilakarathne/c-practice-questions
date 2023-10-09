/*
Right Half Pyramid Pattern in C
*/

#include <stdio.h>

int main(void)
{
//	variable declaration 
	int count, i,j;
	
//	get user inputs 
	printf("Enter count: ");
	scanf("%d", &count);
	
//	display output using for loop
	for(i=1; i<= count; i++ )
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
