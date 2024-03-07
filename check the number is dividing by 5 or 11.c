//Dependenties
#include<stdio.h>

//Main function
int main()
{
	//Global variables
	
	int given_number;
	
	//Take input from user
	
	printf("Enter the number =");
	scanf("%d",&given_number);
	
	//If else statement 
	if((given_number%5 == 0)){
		printf("THe number is divisible by 5 and its quotient is %d",given_number/5);
	} else{
		printf("THe number is not divisible by 5");
	}
	
	if((given_number%11 == 0)){
		printf("/tTHe number is divisible by 11 and its quotient is %d",given_number/11);
	} else{
		printf("/tTHe number is not divisible by 11");
	}
	
}
