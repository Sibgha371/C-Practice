//Program to find vowels

//DEpendenties
#include<stdio.h>
#include<ctype.h>

//Main function
void main()
{
	//Globsl variables
	char alphabet;
	
	//Take input from user
	printf("Enter any alphabet = ");
	scanf("%c",&alphabet);
	
	//IF else statement
	alphabet = tolower(alphabet);
	if((alphabet == 'a')||(alphabet == 'e')||(alphabet == 'i')||(alphabet == 'o')||(alphabet == 'u')){
	printf("The ALPHABET is vowel");
	}else{
	printf("The ALPHABET is not a vowel");
	}
}
