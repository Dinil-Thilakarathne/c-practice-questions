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

## Q8
Given a five digit integer, print the sum of its digits.

```c
#include <stdio.h>

int main() {
	
    //	variables decralation
    int n, sum;

    // get user inout 
    printf("Enter your number : ");
    scanf("%d", &n);

    // calculate sum 
    while (n >0) {
        sum += n %10;
        n /= 10;
    }

    // display output
    printf("%d", sum);

    return 0;
}
```

## Q9
Write a C program that reads 5 numbers and sums all odd values between them.

```
Test Data :
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Input the fifth number: 5

Expected Output:
Sum of all odd values: 46
```

```c
#include <stdio.h>

int main(void)
{
//	variables declarations 
	int num_1, num_2, num_3, num_4, num_5, sum;
	
//	get user inputs 
	printf("Input the first number: ");
	scanf("%d", &num_1);
	
	printf("Input the second number: ");
	scanf("%d", &num_2);
	
	printf("Input the third number: ");
	scanf("%d", &num_3);
	
	printf("Input the fourth number: ");
	scanf("%d", &num_4);
	
	printf("Input the fifth number: ");
	scanf("%d", &num_5);
	
	if(num_1 % 2 !=0){
		sum+=num_1;
	}
	if(num_2 % 2 !=0){
		sum+=num_2;
	}
	if(num_3  % 2 !=0){
		sum+=num_3;
	}
	if(num_4 % 2 !=0){
		sum+=num_4;
	}
	if(num_5 % 2 != 0){
		sum+=num_5;
	}
	
	printf("Sum of all odd values: %d", sum);
	return 0;
}
```

## Q10
Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.


```
Test Data :
Input the first number: 25
Input the second number: 15
Input the third number: 35

Expected Output:
Perimeter = 75.0
```

```c
#include <stdio.h>

int main(void)
{
//	variables declarations
	float value_1 , value_2, value_3 , perimeter;
	
//	get user inputs 
	printf("Input the first value: ");
	scanf("%f", &value_1);
	
	printf("Input the second value: ");
	scanf("%f", &value_2);
	
	printf("Input the third value: ");
	scanf("%f", &value_3);
	
//	calculate perimeter if the 3 values are valid
	if((value_1 + value_2) > value_3 || (value_2 + value_3) > value_1 || (value_1 + value_3) > value_2 ){
		perimeter = value_1 + value_2+ value_3;
	}
	
//	display output 
	printf("%.2f", perimeter);
	return 0;
}
```

## Q11
Write a C program that reads two integers and checks whether they are multiplied or not.


```
Test Data :
Input the first number: 5
Input the second number: 15

Expected Output:
Multiplied!

```

```c
#include <stdio.h>

int main(void)
{
//	variables declarations 
	int num_1, num_2;
	
//	get user inputs 
	printf("Input the first number: ");
	scanf("%d", &num_1);
	
	printf("Input the second number: ");
	scanf("%d", &num_2);
	
//	display output 
	(num_2 % num_1 == 0) ? printf("Multiplied") : " ";
	
	return 0;
}
```

## Q12
Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.

```c
#include <stdio.h>

int main(void)
{
//	variables declarations 
	int negative_num_count=0 , positive_num_count=0 , num , count;
	
	for(count=0; count<5 ; count++)
	{
//		get user inouts 
		printf("Enter your number : ");
		scanf("%d", &num);
		
//		using ternary opeation
		(num >=0 ) ? positive_num_count++ : negative_num_count++;
		
//		using if else 
//		if(num >= 0){
//			positive_num_count++;
//		}else{
//			negative_num_count++;
//		}
		

	}
	
//	display outputs
	printf("%d\n", positive_num_count);
	printf("%d", negative_num_count);
	

	return 0;
}
```

## Q13
Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.

```
Test Data :
Input an integer: 13

Expected Output:
Positive Odd
```

```c
#include <stdio.h>

int main(void)
{
//	variables declarations 
	int num;
	
//	get user input 
	printf("Enter your number : ");
	scanf("%d", &num);
	
//	display output 
	if(num >= 0){
		(num %2 ==0) ? printf("Positive even") : printf("Positive odd");
	}else{
		(num % 2 == 0) ? printf("Negative even") : printf("Negative odd");
	}
	
	return 0;
}
```

## Q14
Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:


```
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot

Test Data :
42

Expected Output :
Its very hot.
```

```c

#include <stdio.h>

int main(void)
{
//	variables declarations 
	int temp;
	
//	get user input 
	printf("Enter Temperature: ");
	scanf("%d", &temp);
	
//	check the value of temperature and display output 
	if(temp >= 40){
		printf("Its very hot");
	}else if(temp >= 30){
		printf("Its Hot");
	}else if(temp >= 20){
		printf("Cold weather");
	}else if(temp >= 10){
		printf("Very Cold weather");
	}else{
		printf("Freezing weather");
	}

	return 0;
}
```

## Q15
Write a C program to check whether a triangle can be formed with the given values for the angles.



```
Test Data :
40 55 65

Expected Output :
The triangle is not valid.
```

```c

#include <stdio.h>

int main(void)
{
//	variable declarations
	int value_1 , value_2, value_3;
	
//	get user input for 3 values 
	printf("Enter your first value :");
	scanf("%d", &value_1); 
	
	printf("Enter your second value :");
	scanf("%d", &value_2); 
	
	printf("Enter your third value :");
	scanf("%d", &value_3); 

//	check if the triangle is valid or not 
	if((value_1 + value_2 + value_3) == 180){
		printf("The triangle is valid.");
	}else{
		printf("The triangle is not valid.");
	}
	
	return 0;
}
```

## Q16
Write a program in C to read any Month Number in integer and display the number of days for this month.

```
Test Data :
7

Expected Output :
Month have 31 days
```

```c

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
```

## Q17
Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.


```
Test Data : 7 9

Expected Output :
The coordinate point (7,9) lies in the First quadrant.
```

```c
#include <stdio.h>

int main(void)
{
//	variables decralation
	int x,y; 
	
//	get user inputs and asign them to x and y variables
	printf("Enter values of X and Y (separate by space): ");
	scanf("%d %d", &x, &y);
	
	if(x > 0 && y > 0){
		printf("The coordinate point (%d, %d) lies in the First quadrant.", x ,y);
	}else if(x < 0 && y > 0){
		printf("The coordinate point (%d, %d) lies in the Second quadrant.", x ,y);
	}else if(x < 0 && y < 0){
		printf("The coordinate point (%d, %d) lies in the Third quadrant.", x ,y);
	}else{
		printf("The coordinate point (%d, %d) lies in the Forth quadrant.", x ,y);
	}
	return 0;
}
```

## Q18
Given a five digit integer, print the sum of its digits.

```
Test Data : 10564

Expected Output : 16
```

```c
#include <stdio.h>

int main() {
	
    //	variables decralation
    int n, sum;

    // get user inout 
    printf("Enter your number : ");
    scanf("%d", &n);

    // calculate sum 
    while (n >0) {
        sum += n %10;
        n /= 10;
    }

    // display output
    printf("%d", sum);

    return 0;
}
```

