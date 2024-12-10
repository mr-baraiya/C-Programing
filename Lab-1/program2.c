//2. Find maximum and minimum between two numbers using function.?(A)
#include <stdio.h>

void findMinAndMax(int, int);

void main(){
	int n1,n2;
	printf("Enter the First Number : ");
	scanf("%d",&n1);
	printf("Enter the Second Number : ");
	scanf("%d",&n2);
	findMinAndMax(n1,n2);
}

void findMinAndMax(int a,int b){
	if(a > b){
		printf("%d is Max.\n",a);
		printf("%d is Min.",b);
	}
	else{
		printf("%d is Max.\n",b);
		printf("%d is Min.",a);
	}
}
