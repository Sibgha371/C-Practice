//Write a revised program to display the cube of the number upto given an interger and their sum 

//Dependenties
#include<stdio.h>

//MAin function
void main()
{
	//Global variabes
	int number,input,sum,cube,cube_sum;
	
	//Take input from user
	printf("Enter the number =");
	scanf("%d",&input);
	
	for(number=1;number<=input;number++){
		sum = sum + number;
		cube = number * number * number;
		cube_sum = cube_sum + cube;
		printf("\nThe number is %d and cube is %d",number,cube);
	}
	printf("\nthe sum of numbers is %d and the sum of cubes is %d",sum,cube_sum);
}
