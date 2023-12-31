- [Basic](#basic)
	- [Q1](#q1)
	- [Q2](#q2)
	- [Q3](#q3)
	- [Q4](#q4)
	- [Q5](#q5)
- [Control flow](#control-flow)
	- [Q1](#q1-1)
	- [Q2](#q2-1)
	- [Q3](#q3-1)
	- [Q4](#q4-1)
	- [Q5](#q5-1)
	- [Q6](#q6)
	- [Q7](#q7)
	- [Q8](#q8)
	- [Q9](#q9)
	- [Q10](#q10)
	- [Q11](#q11)
	- [Q12](#q12)
- [Basic Algorithm](#basic-algorithm)
	- [Q1](#q1-2)
	- [Q2](#q2-2)
	- [Q3](#q3-2)
	- [Q4](#q4-2)
- [Patterns](#patterns)
	- [Q1](#q1-3)
	- [Q2](#q2-3)
	- [Q3](#q3-3)
	- [Q4](#q4-3)
	- [Q5](#q5-2)
	- [Q7](#q7-1)
	- [Q8](#q8-1)
- [Loops](#loops)
	- [Q1](#q1-4)
	- [Q2](#q2-4)

# Basic

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

## Q4
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

## Q5
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

# Control flow

## Q1
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


## Q2
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

## Q3
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

## Q4
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

## Q5
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

## Q6
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

## Q7
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

## Q8
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

## Q9
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

## Q10
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

## Q11
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

## Q12
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

# Basic Algorithm

## Q1
Write a C program to compute the sum of the three given integers with some exceptions.
If any of the values is in the range 10..20 inclusive, then that value will be considered as 0, except for 13 and 17.

```
Test Data : 
16
11
13

Expected Output : 13
```

```c
#include <stdio.h>

int main(void)
{
//	variables declarations
	int num, sum, count;
	
//	get user inputs three times 
	for(count=0 ; count <3; count++){
		printf("Enter your number : ");
		scanf("%d", &num);
		
//		check if the input is valid 
		if((num > 10 && num <20) && (num!=13 && num!=17)){
			num = 0;
		}
		sum+=num;
	}
	
//	display output 
	printf("sum is : %d", sum);
	return 0;
}
```

## Q2
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

## Q3
Write a C program to check two given integers and return the one nearest to 13 without crossing over. 
Return 0 if both numbers go over.

```
Test cases :
printf("%d", test(4, 5));
printf("\n%d", test(7, 12));
printf("\n%d", test(10, 13));
printf("\n%d", test(17, 33));

Expected Output : 
5
12
13
0
```

```c
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

```
## Q4
Check two given integers, each in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33

```
Test cases :
    11, 21
    11, 20
    10, 10

Expected Output : 
true
false
true
```

```c
#include <stdio.h>

int main(void)
{
	int num1, num2;
	
	do{
		printf("Enter your two numbers (separate by one space): ");
		scanf("%d %d", &num1, &num2);
		
	}while((num1 < 10 && num >99) && (num2 < 10 && num2 > 99));
	
	if((num1 / 10 == num2 /2 || num1 / 10 == num2 % 10) || (num1 % 10 == num2 % 10 || num1 % 10 == num2 / 10 ))
		printf("true");
	else{
		printf('false');
	}
	
	
	return 0;
}
```


# Patterns

## Q1
Right Half Pyramid Pattern in C

```
Test Data :
5

Expected Output:
*     
* *      
* * *     
* * * *
* * * * * 

```

```c
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
```

## Q2
Left Half Pyramid Pattern in C

```
Test Data :
5

Expected Output:
    *
   **
  ***
 ****
*****

```

```c
#include <stdio.h>

int main(void)
{
//	variable declaration 
	int row_count, i,j, k;
	
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
		printf("\n");
	}
	return 0;
}
```

## Q3
Full Pyramid Pattern in C

```
Test Data :
5

Expected Output:
         *           
       * * *         
     * * * * *             
   * * * * * * *         
 * * * * * * * * *   

```

```c
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
			printf("*");
		}
		for(q=1; q<=(row_count - i); q++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
```

## Q4
Inverted Left Half Pyramid Pattern in C

```
Test Data :


Expected Output:


```

```c
#include <stdio.h>

int main(void)
{
    // variable declration
    int row_count, i, k, j;

    // get user inputs 
    printf("Enter row count : ");
    scanf("%d", &row_count);

    for(i=0; i<row_count; i++)
    {

        for(j=i; j>0; j--)
        {
            printf(" ");
        }
        for(k=row_count-i; k>=1; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

## Q5
Inverted Left Half Pyramid Pattern in C

```
Test Data :


Expected Output:


```

```c
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
```

## Q7
Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.


```
Test Data :
	4

Expected Output:
   1
   2 3
   4 5 6
   7 8 9 10

```

```c
#include <stdio.h>

int main(void)
{
    // declare variables 
    int row_count, i, j, num =1;

    // get user input and asign its values to the row_count variable
    printf("Enter your number: ");
    scanf("%d", &row_count);

    for ( i = 1; i <= row_count; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
        
    }
    
    return 0;
}
```

## Q8
Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

```
Test Data :
	4

Expected Output:
   1 
  2 3 
 4 5 6 
7 8 9 10 

```

```c
#include <stdio.h>

int main(void)
{
    // declare variables 
    int row_count, i, j, k, num =1;

    // get user input and asign its values to the row_count variable
    printf("Enter your number: ");
    scanf("%d", &row_count);

    for ( i = 1; i <= row_count; i++)
    {
//    	print spaces 
        for ( k = 1; k <= (row_count - i); k++)
        {
            printf(" ");
        }
        
//        print number 
        for ( j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
        
    }
    
    return 0;
}
```

# Loops

## Q1
Write a program in C to display the multiplication table for a given integer.


```
Test Data :
Input the number (Table to be calculated) : 15

Expected Output:
15 X 1 = 15
...
...
15 X 10 = 150

```

```c
#include <stdio.h>

int main(void)
{
    // declare variables 
    int num, i;

    // get user input and asign value to num variable 
    printf("Input the number (Table to be calculated) :");
    scanf("%d", &num);

    for ( i = 1; i <= num; i++)
    {
        printf("%d X %d = %d\n", num, i , num * i);
    }

    return 0;
    
}
```

## Q2
Write a program in C to display the multiplier table vertically from 1 to n.


```
Test Data :
Input upto the table number starting from 1 : 8

Expected Output:
Multiplication table from 1 to 8
1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
...
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70,

```

```c
#include <stdio.h>

int main(void)
{
    // declare variables 
    int num, i;

    // get user input and asign value to num variable 
    printf("Input the number (Table to be calculated) :");
    scanf("%d", &num);

    for ( i = 1; i <= num; i++)
    {
        printf("%d X %d = %d\n", num, i , num * i);
    }

    return 0;
    
}
```