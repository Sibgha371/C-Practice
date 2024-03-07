//Program by using goto statement

#include<stdio.h>
#include<math.h>

void main()
{
	float num;
	 positive:
	 	printf("Please enter the positive number=");
	 	scanf("%f",&num);
	 	
	
	if(num<0){
	goto positive;
}
	else{
		printf("Square roor of %3.2f is %3.2f",num,sqrt(num));
	}
}
