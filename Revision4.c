//DEpendenties

#include<stdio.h>

//Main Function

int main()
{
	//Global variable
	int inputvalue,modulusvalue;
	
	//Take input from user
	
	printf("Enter integer number = ");
	scanf("%d",&inputvalue);
	
	//Get if the input dividing by 2
	
	modulusvalue = inputvalue % 2;
	printf("Modulus is %d",modulusvalue);
	
	//Get if integer is even or odd
	if(modulusvalue == 0){
		printf("\nthe integer is even %d", inputvalue);
	}
	else{
		printf("\nthe integer is odd %d", inputvalue);
	}
	
	
}
