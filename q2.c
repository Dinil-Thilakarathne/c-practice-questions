// Write a C program to convert specified days into years, weeks and days.
// Note: Ignore leap year.

#include <stdio.h>

int main(void)
{
//	decalre varibles 
	int days, year_count , week_count , days_count;
	
//	get user input 
	printf("Enter number of days : ");
	scanf("%d", &days);
	
	year_count = days / 365;
	week_count = (days % 365) / 7;
	days_count = (days % 365) % 7;
	
	printf("%d %d %d", year_count, week_count, days_count);
}
