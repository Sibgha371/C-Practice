//Write a program to display the cube of the number upto given integer and their sum

//aDependenties
#include<stdio.h>

//Main function 
void main()
{
	//Global variables
	int sum,number,input,cube,cubeSum;
	
	//Take input from user
	printf("Enter the number =");
	scanf("%d",&input);
	
	for(number=1;number<=input;number++){
		sum = sum + number;
		cube = number * number * number;
		cubeSum = cubeSum + cube;
		printf("Number is %d and cube is %d\n",number,cube);
	}
	printf("The sum of all number is %d and sum of all cubes is %d",sum,cubeSum);
}
