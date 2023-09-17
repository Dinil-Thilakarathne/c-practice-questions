// input integer numbers from the keyboard and calculate totoal and display it until user inputs -1. 
#include <stdio.h>

int main(void)
{
//	decalre variables 
	int num,tot = 0;
	
//	get user input and assign value to num variable
	printf("Enter your number : ");
	scanf("%d", &num);
	
	while(num != -1)
	{
		tot+=num;
//		printf("total is : %d\n", tot);
		
		printf("Enter your number ( Enter -1 for stop)  :");
		scanf("%d", &num);
	}
	printf("total is : %d\n", tot);

}
