/*
Write a program in C to read any Month Number in integer and display the number of days for this month.
Test Data :
7
Expected Output :
Month have 31 days
*/

#include <stdio.h>

int main(vodi)
{
//	variables decralation
	int month;
	
//	get month number from the user and asign it to the month variable
	printf("Enter month number : ");
	scanf("%d" , &month);
	
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Month have 31 days !");
			break;
		case 2:
			printf("Moth have 28 days !\n");
			printf("In leap year Moth have 29 days !");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Month have 30 days !\n");
			break;
		default: 
			printf("Invalid month number \n");
			break;
	}
	return 0;
}
