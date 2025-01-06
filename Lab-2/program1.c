//1. Return the maximum of three floating-point numbers. (A)
#include <stdio.h>

float maxOfThree(float ,float ,float);

void main(){
	float n1,n2,n3;
	printf("Enter the first Number : ");
	scanf("%f",&n1);
	printf("Enter the second Number : ");
	scanf("%f",&n2);
	printf("Enter the third Number : ");
	scanf("%f",&n3);
	float max = maxOfThree(n1,n2,n3);
	printf("Max = %.2f",max); //up to two decimal point round of
}
float maxOfThree(float n1,float n2,float n3){
	if(n1 >= n2 && n1 >= n3){
		return n1;
	}
	else if(n2 >= n1 && n2 >= n3){
		return n2;
	}
	else{
		return n3;
	}
}
