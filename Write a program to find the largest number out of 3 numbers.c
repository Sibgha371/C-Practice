//Write a program to read roll no,name and marks of three subjects and caculate the percentage and division

//Dependenties
#include<stdio.h>

//Main function
void main()
{
//Global variables
int roll_no,student_name,physics,chemistry,computer,obtained_mark_sum,total_marks_sum,total_marks_in_physics,total_marks_in_chemistry,total_marks_in_computer,per;
float percentage;
//Take input from user
printf("Enter the Roll Number =");
scanf("%d",&roll_no);
printf("Enter the name of student =");
scanf("%s",&student_name);
printf("Total marks and marks obtained in physics(0/100) =");
scanf("%d/%d",&physics,&total_marks_in_physics);
printf("Total marks and marks obtained in chwmistry(0/100) =");
scanf("%d/%d",&chemistry,&total_marks_in_chemistry);
printf("Total marks and marks obtained in computer(0/100) =");
scanf("%d/%d",&computer,&total_marks_in_computer);

//total marks obtianed by student
total_marks_sum = total_marks_in_physics+total_marks_in_chemistry+total_marks_in_computer;
obtained_mark_sum = physics+chemistry+computer;
printf("The marks obtained from %d is %d",total_marks_sum,obtained_mark_sum);

//percentage of marks
percentage = (obtained_mark_sum*100)/total_marks_sum;
printf("\nThe percentage of marks is %4.1f",percentage);
}
