#include <stdio.h>

int main(void)
{
//	variable declaration 
	int row_count, i, j ,k, q;
	
//	get user inputs 
	printf("Enter count : ");
	scanf("%d", &row_count);
	
//	display output using for loop
	for(i=1; i<= row_count; i++ )
	{	
		for(j=1; j<=(row_count - i); j++)
		{
			printf(" ");
		}
		for(k=1; k<=(i * 2 -1); k++)
		{
			printf("%d", k);
		}
		for(q=1; q<=(row_count - i); q++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
