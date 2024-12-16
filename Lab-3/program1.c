//1. Find factorial of a number using function and recursive function. (A)
#include <stdio.h>
int factorial(int);

void main(){
	int n=0;
	printf("Enter the Number : ");
	scanf("%d",&n);
	int ans = factorial(n);
	printf("The Factorial Of %d is = %d",n,ans);
}

int factorial(int n){
	if(n == 1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
