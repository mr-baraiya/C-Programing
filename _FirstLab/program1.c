//1.Check whether given number is positive or negative.
#include <stdio.h>
void main(){
	int n=0;
	printf("Enter the Number : ");
	scanf("%d",&n);
	if(n >= 0){
		printf("%d is Positive Number.",n);
	}
	else{
		printf("%d is Negative Number.",n);
	}
}
