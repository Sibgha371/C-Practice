//Program to find the sum of first 10 natural numbers

//Dependenties
#include<stdio.h>

//Main function
void main()
{
	int count,sum;
	for(count = 1;count <= 10;count++){
		sum = sum + count;
	    printf("\n %d",count);
	}
	printf("\nthe sum of first ten natural numbers is %d",sum);
	
}
