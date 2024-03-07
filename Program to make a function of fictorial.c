//Program to make a function of fictorial

//Dependenties
#include<stdio.h>

//Main function
void main()
{
	//Declearation of a function
	int fact(int a);
	
	//Global variable
	int n;
	
	//Taking input from user
	printf("Enter the number :");
	scanf("%d",&n);
	int fact(n);
}
//Definition of function
int fact(int a)
{
	int fact = 1,n;
	for(;n>=1;n--)
	{
		fact*=n;
		}
	printf("The fictorial of %d is %d",n,fact);
	return fact;
	
}
