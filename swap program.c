//dependies

#include<stdio.h>

//Main function 

float main()
{
	//Global variables 
	
	float variable_1,variable_2,variable_3;
	
	//Taking input 
	
	printf("Enter variable_1 =");
	scanf("%f",&variable_1);
	printf("Enter variable_2 =");
	scanf("&f",&variable_2);
	
	
	//The values of variable before swap
	
	printf("\nBefore Swap:");
	printf("\n variable_1 %f",variable_2);
	printf("\n variable_2  %f",variable_1);
	
	//Swaping 
	
	variable_3 = variable_1;
    variable_1 = variable_2;
    variable_2 = variable_3;
    
    //The values of variable after swap
    	
    printf("\nAfter Swap:");
	printf("\n variable_1 %f",variable_2);
	printf("\n variable_2  %f",variable_1);
	
}
