//Rivision the program of read roll number,name,marks and percentage

//Dependencies
#include<stdio.h>

//Main function
void main()
{
   //Global variables
   int roll_number,student_name,total_subjects,marks_per_subject,total_marks,mark_per_subject,i, marks_obtained,temp_marks;
   
   //Take inputs 
   printf("Enter the roll number =");
   scanf("%d",&roll_number);
   
   printf("Enter the name of student =");
   scanf("%s",&student_name);
   
   printf("Total subjects =");
   scanf("%d",&total_subjects);
   
   printf("Total marks per subjects =");
   scanf("%d",&marks_per_subject);
   
   total_marks = total_subjects*marks_per_subject;
   
   for(i = 1;i <= total_subjects;i++){
   	marks_obtained = marks_obtained + temp_marks;
   	printf("Enter the marks of %d subject=",i);
   	scanf("%d",&temp_marks);
   }
   
   printf("Total obtained marks %d/%d",marks_obtained ,total_marks) ;
}
