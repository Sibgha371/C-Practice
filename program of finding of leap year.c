//Dependenties
#include<stdio.h>

//Main function
int main()

{
	//Global variables
	int modulus,leap_year;
	
	//Take input from user
	printf("Enter the year =");
	scanf("%d",&leap_year);
	
	//nested if else statement
	if( !(leap_year%4) ){
		
		printf("The year %d is a leap year!",leap_year);
	
	} else {
		
		//Check if the year is divisible by 100 & 400
		if( !(leap_year%100) && !(leap_year%400) ){
			
			printf("The year %d is a leap year!",leap_year);
			
		} else {
			
			printf("The year %d is not a leap year!",leap_year);
			
		}
		
	}
}
