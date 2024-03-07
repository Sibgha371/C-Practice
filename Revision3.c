//Dependenties 

#include<stdio.h>

//Maim Function

void main()
{
//Global variables
	
float variable_1,variable_2,variable_3;
	
//taking input from user
	
printf("Enter variable_1 =");
scanf("%f",&variable_1);
printf("Enter variable_2 =");
scanf("%f",&variable_2);
	
//Values before swap
	
printf("\nBefore swap:");
printf("\nvariable_1 %f",variable_2);
printf("\nvariable_2 %f",variable_1);

//Swaping

variable_1 = variable_3;
variable_2 = variable_3;
variable_1 = variable_2;
    
//Values after swap
    
printf("\nAfter swap:");
printf("\nvariable_1 %f",variable_2);
printf("\nvariable_2 %f",variable_1);
}
