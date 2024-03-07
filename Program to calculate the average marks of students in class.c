//Program to calculate the average marks of students in class

//Dependenties
#include<stdio.h>

//Main function
void main()
{
	//Global variables
	int total_student=0;
	float average,marks,sum=0.0;
	
	//Applying loops statements
	do{
		printf("Enter the marks <enter any negative num to stop>=");
		scanf("%f",&marks);
		
		if(marks>=0.0){
			total_student++;
			sum+=marks;
		}
	}while(marks>0.0);
	
	if(total_student>0){
		average=sum/(float)total_student;
		printf("The average marks of class is %4.2f",average);
	}else{
		printf("Please atleast write any negative number to calculate the average");
	}
}
	

