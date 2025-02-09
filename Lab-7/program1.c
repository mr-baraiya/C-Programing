//1. Print value and address of a variable. (A)
#include <stdio.h>
void main(){
	int a = 0;
	printf("Enter the Number : ");
	scanf("%d",&a);
	//Declare a Pointer
	int *p = &a;
	printf("Address of a = %d",p);
	printf("\nValue of a = %d",*p);
}
