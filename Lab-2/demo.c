#include<stdio.h>

void main(){
	int a=10;
	printf("a = %d \n",a);
	printf("&a = %d \n",&a);
	
	int *p;
	p = &a;
	printf("p = %d \n",p);
	printf("*p = %d",*p);
}
