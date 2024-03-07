//Dependenties

#include<stdio.h>

//Main Function

void main()

{    //Global variables
    int num;
    
	//Take input from user
	printf("Enter the number =");
	scanf("%d",&num);
	
	//Find if the number is positive or negtive or zero
	if(num > 0)
	printf("the number is positive");
	else if(num < 0)
	printf("the number is negative");
	else 
	printf("the number is zero");
}

