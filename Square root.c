//Dependenties

#include<stdio.h>
#include<math.h>

//Main function

void main()
{
	//Global variables
	int x,square_root;
	
	//Take input from user
	printf("Enter the number =");
	scanf("%d",&x);
	
	//If statement
	if(x >= 0)
	{
	square_root = sqrt(x);
	printf("square_root = %d",square_root);
	}
	else {printf("Square root cannot be calculated");}

}
