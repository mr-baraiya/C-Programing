//1. Swap value of two numbers using pointer. (A)
#include <stdio.h>
void main(){
	int n1,n2;
	printf("Enter the First Number : ");
	scanf("%d",&n1);
	printf("Enter the Second Number : ");
	scanf("%d",&n2);
	int *ptr1 = &n1;
	int *ptr2 = &n2;
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("n1 = %d\n",n1);
	printf("n2 = %d\n",n2);
}
