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

## Q3
input integer numbers from the keyboard and calculate total and display it until user inputs -1.

```c
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
		
		printf("Enter your next number ( Enter -1 for stop)  :");
		scanf("%d", &num);
	}
	printf("total is : %d\n", tot);

}
```

## Q4
Write a C program to compute the perimeter and area of a circle with a given radius.

```c
#include <stdio.h>

int main(void)
{
	float radius,perimeter,area;
	
//	with a given value
//	radius= 7.0;
	
//	with user input 
	printf("Enter value of radius: ");
	scanf("%f", &radius);
	
//	calculate perimeter
	perimeter = 2.0 * (22.0 / 7.0 ) * radius;
	
//	calculate area
	area = (22.0 / 7.0) * radius * radius;
	
//	display outputs 
	printf("Permiter of circle is: %f\nArea of circle is: %f", perimeter , area);
	return 0;
}
```

## Q5
Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
>logic : avg = ((item1_weight * item1_value) + (item2_weight * item2_value)) / (item1_value + item2_value)

```c
#include <stdio.h>

int main(void)
{
//	decalre variables 
	float item1_weight ,item1_value, item2_weight, item2_value , tot_value , avg;
	
//	get user inputs 
	printf("Enter weight - item1: ");
	scanf("%f", &item1_weight);
	
	printf("No. of item1: ");
	scanf("%f", &item1_value);
	
	printf("Enter weight - item2: ");
	scanf("%f", &item2_weight);
	
	printf("No. of item2: ");
	scanf("%f", &item2_value);
	
//	calculate total value of item1 and item2
	tot_value = item1_value + item2_value;
	
//	calculate avg 
	avg = ((item1_weight * item1_value) + (item2_weight * item2_value)) / tot_value;
	
	printf("Average Value = %f", avg);
	
	return 0;
}
```

## Q6
Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour.

Print the ID and salary (with two decimal places) of the employee for a particular month. 

```
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000

Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
```

```c
#include <stdio.h>

int main(void)
{
//	decalre variables 
	float item1_weight ,item1_value, item2_weight, item2_value , tot_value , avg;
	
//	get user inputs 
	printf("Enter weight - item1: ");
	scanf("%f", &item1_weight);
	
	printf("No. of item1: ");
	scanf("%f", &item1_value);
	
	printf("Enter weight - item2: ");
	scanf("%f", &item2_weight);
	
	printf("No. of item2: ");
	scanf("%f", &item2_value);
	
//	calculate total value of item1 and item2
	tot_value = item1_value + item2_value;
	
//	calculate avg 
	avg = ((item1_weight * item1_value) + (item2_weight * item2_value)) / tot_value;
	
	printf("Average Value = %f", avg);
	
	return 0;
}
```

## Q7
Write a C program that accepts three integers and finds the maximum of three

```
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15

Expected Output:
Maximum value of three integers: 35
```

```c
#include <stdio.h>

int main(void)
{
//	variables declarations 
	int num1, num2, num3, max_num;
	
//	get user inputs 
	printf("Input the first integer: ");
	scanf("%d", &num1);
	
	printf("Input the second integer: ");
	scanf("%d", &num2);
	
	printf("Input the third integer: ");
	scanf("%d", &num3);
	
//	calculate max numer using ternary conditional operators 
	max_num = (num2 > num1) ? ((num2 > num3) ? num2 : num3) : (num1> num3)? num1 : num3;

//	calculate max numer using if else conditional operators 
//	if(num2 > num1 ){
//		if(num2 > num3){
//			max_num = num2;
//		}else{
//			max_num = num3;
//		}
//	}else if(num1 > num3){
//		max_num = num1;
//	}else{
//		max_num = num3;
//	}
	
//	display output
	printf("Maximum value of three integers: %d", max_num);
	
	return 0;
}
```

## Q7
Write a C program that accepts three integers and finds the maximum of three

```
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15

Expected Output:
Maximum value of three integers: 35
```

```c
#include <stdio.h>

int main(void)
{
//	variables declarations 
	int num1, num2, num3, max_num;
	
//	get user inputs 
	printf("Input the first integer: ");
	scanf("%d", &num1);
	
	printf("Input the second integer: ");
	scanf("%d", &num2);
	
	printf("Input the third integer: ");
	scanf("%d", &num3);
	
//	calculate max numer using ternary conditional operators 
	max_num = (num2 > num1) ? ((num2 > num3) ? num2 : num3) : (num1> num3)? num1 : num3;

//	calculate max numer using if else conditional operators 
//	if(num2 > num1 ){
//		if(num2 > num3){
//			max_num = num2;
//		}else{
//			max_num = num3;
//		}
//	}else if(num1 > num3){
//		max_num = num1;
//	}else{
//		max_num = num3;
//	}
	
//	display output
	printf("Maximum value of three integers: %d", max_num);
	
	return 0;
}
```