//Dependenties

#include<stdio.h>
#include<conio.h>

//Main Function

void main()
{
	//Global varibles
	double fahrenheit,celsius;
	
	//Take input from user
	printf("Enter the temperature in fahrenheit = ");
	scanf("%lf",&fahrenheit);
	\
	//Bsic Formula for celsius
	celsius = ((double)5/(double)9)*(fahrenheit - (double)32);
	
	//Function output
	printf("\nTemperature in celsius is %.1f",celsius);
}
