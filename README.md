## Q1
Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
```c
#include <stdio.h>

int main(void)
{
//	variables decalaration
	int height, width, perimeter;
	
	height = 7;
	width = 5;
	
//	calculate perimeter 
	perimeter = 2 * (height + width);
	
//	display outputs 
	printf("%d", perimeter);
	return 0;
}
```

## Q2
Write a C program to convert specified days into years, weeks and days.
>Note: Ignore leap year.
```c
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
```