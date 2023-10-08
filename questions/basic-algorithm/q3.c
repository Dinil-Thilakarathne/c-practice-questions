/*
Write a C program to check two given integers and return the one nearest to 13 without crossing over. 
Return 0 if both numbers go over.

Test cases :
  printf("%d", test(4, 5));
  printf("\n%d", test(7, 12));
  printf("\n%d", test(10, 13));
  printf("\n%d", test(17, 33));
  
Expected Output:
5
12
13
0
*/

#include <stdio.h>
int test(int x, int y);

int main(void)
{
//	variables declaration
	int num1, num2;
	
//	get user inputs 
	printf("Enter your two numbers (separate by one space) : ");
	scanf("%d %d", &num1, &num2);
	
//	display output 
	printf("%d", test(num1, num2));
	return 0;
}

int test(int x, int y)
{
	if(x > 13 && y >13) return 0;
	if(x <= 13 && y > 13) return x;
	if(x > 13 && y <=13) return y;
	return x > y? x : y;
}
