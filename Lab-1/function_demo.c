#include<stdio.h>

void fibbonacci(int);

void main(){
	int n;
	printf("Enter the Number : ");
	scanf("%d",&n);
	
	fibbonacci(n);
}

void fibbonacci(int n){
	//0 1 1 2 3 5
	int p1=0,p2=1,i=0,sum=0;
	for(i=0;i<n;i++){
		printf(" %d ",sum);// 0 1 1 2 3
		p1 = p2;// 1
		p2 = sum;// 2
		sum = p1 + p2;// 3
	}
}
