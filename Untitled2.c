//write a program to convert distance from kilometers to meter

//Dependenties

#include<stdio.h>

//Main function

void main()
//Statement
{
	//Global variables
	
	float kilometer,double meter;
	
	//Take the input from user
	
	printf("Enter the distance in kilomerter = ");
	scanf("%1f,&kilometer");
	
	//Formula to convert distance in meter
	
	meter = kilometer * 1000;
	
	//Output Function
	
	printf("\n%1fkilometer = %1fmeter",kilometer,meter);
}
	
	
