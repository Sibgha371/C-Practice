//Write a program that reads the current state of telephone line;the user should enter w for working or d for dead

//DEpendencies
#include<stdio.h>

//Main function
void main()
{
	char state;
	do
	{
		printf("\nPlease enter the current state of the telephone line (enter \'w\' for working and \'d\' for dead) =");
		scanf("%c",&state);
	}while(state != 'w' && state != 'd');
}
