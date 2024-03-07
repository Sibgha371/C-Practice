//Write a program to print the output as...
// 1 2 3 4 5 
// 1 3 5 7 9 
// 1 4 7 10 13

//Dependenties
#include<stdio.h>

//Main function
void main()
{
	//Global variables
	int i,j,n;
	
	//Starting of nested loops
	for(i=1;i<=3;i++){
	
		n=1;
		for(j=1;n<=5;n++){
			
			printf("%d\t",j);
			j+=i;
		}
		
		printf("\n");
	}
}
