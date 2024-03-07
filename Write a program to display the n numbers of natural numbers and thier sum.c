//Write a program to display the n numbers of natural numbers and thier sum

//dependenties
#include<stdio.h>

//Main function
void main()
{
//Global variables
int number,sum = 0,input = 0;
//Taking output from user
printf("Enter the number =");
scanf("%d",&input);

for(number=1;number <= input ; number++){
	printf("%d\n",number);
	sum = sum + number;
}

printf("Sum is %d",sum);

}
