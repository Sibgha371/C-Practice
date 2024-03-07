#include<stdio.h>
void main (void) {
	
	int data = 12;
	printf("Address of data is %x\n",&data);
	printf("Value of data is %d\n",data);
	
	int* address;
	address = &data;
	printf("Address of Pointer is %x\n",&address);
	printf("Value of Pointer is %x\n",address);
	
	*address = 10;
	printf("New Value is %d\n",data);
}
