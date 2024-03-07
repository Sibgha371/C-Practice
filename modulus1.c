//dependenties
#include<stdio.h>

//Main function
int main()

//statement
{
	//Variables
	int inputValue,modulusValue;
	
	//Get the input from user
	printf("Please enter an integer to find even or odd:");
	scanf("%d",&inputValue);
	
	//Get if the modulus dividing by 2
	modulusValue = inputValue % 2;
	printf("Modulus is %d",modulusValue);
	
	//Check if input is even or odd
	if( modulusValue == 0 ){
		printf("\nThe integer %d is even.",inputValue);
	} else {
		printf("\nThe integer %d is odd.",inputValue);
	}
}
