/* 
Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. 
Print the ID and salary (with two decimal places) of the employee for a particular month. 
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
*/

#include <stdio.h>

int main(void)
{
//	variables declarations
	int emp_id;
	float working_hours, amount_per_hour, salary;
	
//	get user inputs 
	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%d", &emp_id);
	
	printf("Input the working hrs: ");
	scanf("%f", &working_hours);
	
	printf("Salary amount/hr: ");
	scanf("%f", &amount_per_hour);
	
//	caculate salary 
	salary = working_hours * amount_per_hour;
	
//	display outputs 
	printf("Employees ID = %d\n", emp_id);	
	printf("Salary = U$ %.2f", salary);	
	
	return  0;
}
