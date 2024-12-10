//1. Add two numbers using function. (A)

#include <stdio.h>

//function declaration
void addTwoNumbers(int ,int);

void main(){
	int n1,n2;
	printf("Enter the First Number : ");
	scanf("%d",&n1);
	printf("Enter the Second Number : ");
	scanf("%d",&n2);
	//function call
	addTwoNumbers(n1,n2);
}

//function Defination
void addTwoNumbers(int a,int b){
	printf("%d + %d = %d",a,b,a+b);
}
