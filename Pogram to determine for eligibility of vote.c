//Write a programto read the age of a candidate and determine wether it is eligible for casting his/her own vote

//Dependenties
#include<stdio.h>

//Main function 
void main()
{
	int input;
	//Take input from user
	printf("Enter your age =");
	scanf("%d",&input);
	
	//If eles__if statememt
	if( input > 18 ){
		printf("Congratulation! you are eligible for casting your vote");
	}else{
		printf("Your are not eligible for your own vote");
	}
}
