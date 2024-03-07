//Write a program to read roll number,name, marks of subjects and percentage

//Dependenties
#include<stdio.h>

//main function
void main()
{
//Global variables
int roll_number,student_name,total_subject,marks_per_subject,total_marks,marks_obtained,tmp_marks,index=1;
float percent;

//Take input from user
printf("Enter the Roll number =");
scanf("%d",&roll_number);

printf("Enter the name of student =");
scanf("%s",&student_name);

printf("Total subject=");
scanf("%d",&total_subject);

printf("Marks Per Subject=");
scanf("%d",&marks_per_subject);

total_marks = marks_per_subject*total_subject;

while(index <= total_subject){
	printf("Please enter marks for subject %d=",index);
	scanf("%d",&tmp_marks);
	marks_obtained =  marks_obtained + tmp_marks;
	index++;
}

printf("Total Obtained marks are %d/%d",marks_obtained,total_marks);

//Calculate the percentage
if( total_marks > 0 && marks_obtained > 0){
	percent = ( ((float)marks_obtained) / ((float)total_marks) ) * ((float)100);
	printf("\nCalculated Percentage is %f",percent);
} else {
	printf("\nPercentage is 0");
}

}
