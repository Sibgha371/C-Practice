//DEpendenties
#include<stdio.h>

//Main function
int main()

{
	//Global variables
	int modulus,leap_year;
	
	//Take input from user
	printf("Enter the year =");
	scanf("%d",&leap_year);
	
	//Nasted if else statement
	if(!(leap_year%4)){
		printf("the year is a leap year %d",leap_year);
	}
	else{
		if((leap_year%100)&&(leap_year%400)){
			printf("The year is a leap year ");
		}
		else{
			printf("the year is not a leap year");
		}
	}
}
