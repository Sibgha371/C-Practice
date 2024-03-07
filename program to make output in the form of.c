//program to make output in the form of
//5 4 3 2 1
//4 3 2 1
//3 2 1 
//2 1 
//1

//Dependenties
#include<stdio.h>

//Main Function
int main()
{
	//Global variable
	int i,j;
	
	//Using for loop
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
