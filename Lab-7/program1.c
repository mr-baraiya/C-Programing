//1. Print value and address of a variable. (A)
#include <stdio.h>
void main(){
	int a = 0;
	printf("Enter the Number : ");
	scanf("%d",&a);
	
	printf("\nAddress of a = %d",&a);
	printf("\nValue of a = %d",a);
	
	//Declare a Pointer
	int *p = &a;
	printf("\nAddress of a = %d",p);
	printf("\nValue of a = %d",*p);
}
