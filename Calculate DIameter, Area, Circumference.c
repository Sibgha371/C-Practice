//Create a program to calculate the area, circumference & diameter of a circle having radius 2.5

//Dependencies
#include<stdio.h>

//Constant Macros
#define PI 3.14

//Main Function
int main()
{
	//Take radius from the user
	printf("Please Enter the Radius of the Circle=");
	float Radius;
	scanf("%f",&Radius);
	
	//Get Address of Radius Variable
	char **address = &Radius;
	printf("Address of Radius Variable is %p",address);
	
	//Global Variables
	float Diameter,Circumference,Area;
	
	//Diameter of circle
	Diameter = (2 * Radius);
	printf("\nThe diameter of circle is %f\n",Diameter);
	
	//Curcumference of circle
	Circumference = (2 * PI * Radius);
	printf("The curcumference of circle is %f\n",Circumference);
	
	//Area of circle 
	Area = (PI * Radius * Radius );
	printf("The area of circle is %f",Area);
}
