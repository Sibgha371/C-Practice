//Create a program to find the value of Diameter,Circumference and Area

//Dependenties

#include<stdio.h>

//Constant Macros

#define PI 3.14

//Mian Function 
float main()
{
//take radius from user
printf("Enter the Radius of circle =");
float Radius;
scanf("%f",&Radius);

//Address of Radius
char **adress = &Radius;
printf("the adress of Radius is %p",adress);

//Global variables
float Diameter,Circumference,Area;

//finding the Diameter
 Diameter = (2 * Radius);
 printf("\nthe Diameter is %f",Diameter);
 
 //Finding the Circumference
 Circumference = 2 * PI * Radius;
 printf("\nthe  Circumference is %f ", Circumference);
 
 //Finding the Area
 Area = PI * Radius * Radius;
 printf("\nthe Area is %f",Radius);
}

