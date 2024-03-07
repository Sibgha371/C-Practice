//Dependenties

#include<stdio.h>

//Main fuction

void main()
{
	int age,status;
	
	//Take input from user
	
	printf("Enter the age =");
	scanf("%d",&age);
	
	//If condition
	status = (age > 60);
	
	//Output function
	printf("status = %d",status);
}
