/*
Left Half Pyramid Pattern in C
*/

#include <stdio.h>

int main(void)
{
//	variable declaration 
	int row_count, i, j ,k;
	
//	get user inputs 
	printf("Enter count: ");
	scanf("%d", &row_count);
	
//	display output using for loop
	for(i=1; i<= row_count; i++ )
	{	
		for(j=1; j<=(row_count - i); j++)
		{
			printf(" ");
		}
		for(k=1; k<=i; k++)
		{
			printf("*");
		}
		for(k=1; j<=(row_count - i); j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
