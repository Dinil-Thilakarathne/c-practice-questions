/*
Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
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
*/

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
