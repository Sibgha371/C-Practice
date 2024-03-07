#include<stdio.h>
void main()
{
	char first_variable,second_variable;
	int sum;
	first_variable = 'A';
	second_variable = 'B';
	sum = first_variable + second_variable;
	printf("1st character is %c and it's ASCII code is %d\n",first_variable,first_variable);
	printf("2nd character is %c and it's ASCII code is %d\n",second_variable,second_variable);
	printf("sum of ASCII codes is %d",sum);
}
