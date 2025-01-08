//2. Find maximum and minimum between two numbers using function.?(A)
#include <stdio.h>

void max(int, int);
void min(int, int);

void main(){
	int n1,n2;
	printf("Enter the First Number : ");
	scanf("%d",&n1);
	printf("Enter the Second Number : ");
	scanf("%d",&n2);
	max(n1,n2);
	min(n1,n2);
}

void max(int a,int b){
	if(a > b){
		printf("%d is Max.\n",a);
	}
	else{
		printf("%d is Max.\n",b);
	}
}
void min(int a,int b){
	if(a < b){
		printf("%d is Min.",a);
	}
	else{
		printf("%d is Min.",b);
	}
}
