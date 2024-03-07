//Program to make a table

//Dependenties
#include<stdio.h>

//Main function
int main()
{
	//Global variables
	int table,count,answer;
	printf("Table of =");
	scanf("%d",&table);
	for(count=1;count<=10;count++){
		answer=count*table;
		printf("%d * %d = %d\n",table,count,answer);
	}
}
