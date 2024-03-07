//Program to check weather it is a vowel or constant

//DEpendenties
#include<stdio.h>

//Main function
void main()
{
	//Global variable
	char alphabet;
	
	//Take input from user
	printf("Enter the ALPHABET =");
	scanf("%c",&alphabet);
	alphabet = tolower(alphabet);
	
	//Swich statement
	switch(alphabet){
	case'a': case'e': case'i': case'o': case'u':
	printf("The alphabet is vowel");
	break;
	default:
	printf("The alphabet is not a vowels");		
	}
}
