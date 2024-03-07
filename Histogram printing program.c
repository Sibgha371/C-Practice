//Histogram printing program

#include<stdio.h>
void main()
{
	int i,j,n[10] = {19,14,3,10,4,8,12,2,20,15};
    printf("%s%10s%15s","Element","Value","Histogram\n");
    for(i=0;i<=9;i++)
    {
    	printf("%d%13d\n",i,n[i]);
	}
	for(j=1;j<=n[10];j++)
	{
		printf("%c","*");
	}
	printf("\n");
}

