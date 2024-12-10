//4. Generate Fibonacci series of N given number using function name ƒbbo().?(B)

#include <stdio.h>

void fbbo(int);

void main(){
	int n;
	printf("Enter the Number : ");
	scanf("%d",&n);
	fbbo(n);
}

void fbbo(int n){
	int p1 = 0,p2 = 1,sum = 0;
	printf("\n 0 1 ");
	int i = 0;
	for(i=0;i<n-2;i++){
		sum = p1 + p2;
		printf("%d ",sum);
		p1 = p2;
		p2 = sum;
	}
}
