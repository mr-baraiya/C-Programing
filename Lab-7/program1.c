//1. Print value and address of a variable. (A)
#include <stdio.h>
void main(){
	int a = 0;
	printf("Enter the Number : ");
	scanf("%d",&a);
	printf("%d is Store At address = %d",a,&a);
}
