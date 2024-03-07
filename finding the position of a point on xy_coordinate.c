//Write a program to Find the positions of x_coordinate and y_coordinate

//Dependenties
#include<stdio.h>

//Main function 
int main()
{
	//Global variables 
	int x,y;
	
	//Take input from user 
	printf("Enter the x_coordinate and y_coordinate As x,y =");
	scanf("%d,%d",&x,&y);
	
	//Converting the float value in integer
	///x = (int)x;
	//y = (int)y;
	
	//Checking the positions of points
	if(x == 0)
	{
		
		if(y == 0)
		{
			printf("The point is lying on origion");
		} else { 
			printf("The point is lying on Y_axis");
		}
	} else if(x > 0) 
	{
		if(y == 0)
		{
			printf("The point lying on X_axis");
		} else if(y > 0) 
		{
			printf("The point lying on 1st Quadrent");
		}else{
			printf("The point lying on 4th Quadrent");
		}
	}
	else{
		if(y == 0){
			printf("the ponit liying on x_axis");
		}
		else if(y > 0){
			printf("The point lying on 2rd Quadrent");
		}else{
			printf("The point lying on 3th Quadrent");
		}
	}
	}
	
