//3. Calculate sum of two numbers using pointer. (A)
#include <stdio.h>
void main(){
	int n1,n2;
	printf("Enter the First Number : ");
	scanf("%d",&n1);
	printf("Enter the Second Number : ");
	scanf("%d",&n2);
	
	int *p1 = &n1;
	int *p2 = &n2;
	
	printf("%d + %d = %d",*p1,*p2,(*p1 + *p2));
}
