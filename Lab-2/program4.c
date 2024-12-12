//4. Find all prime numbers between given interval using functions.?(B)

#include<stdio.h>

void findPrime(int ,int);
int isPrime(int);

void main(){
	int start,end;
	printf("Enter the start : ");
	scanf("%d",&start);
	printf("Enter the end : ");
	scanf("%d",&end);
	findPrime(start,end);
}

void findPrime(int start,int end){
	int i = 0;
	for(i=start;i<=end;i++){
		if(isPrime(i)==1){
			printf("%d \n",i);
		}
		else{
			continue;
		}
	}
}

int isPrime(int n){
	int count = 0;
	int i = 0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count == 2){
		return 1;
	}
	else{
		return 0;
	}
}
