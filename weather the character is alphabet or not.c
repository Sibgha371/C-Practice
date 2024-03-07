//A program to check weather a character is alphabet or not

//Dependenties
#include<stdio.h>

//Main function
void main()
{
//Global variables
char ch;

//Take input from user
printf("Enter the character =");
scanf("%c",&ch);

//If else Statement
if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')){
	printf("THE character is alphabet");
} else{
	printf("THE character is not alphabet");}
}
