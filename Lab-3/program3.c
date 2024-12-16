//3. Find power of any number using recursion.?(A)
#include <stdio.h>

int power(int ,int);

void main (){
	int n = 0,p = 0;
	printf("Enetr the number : ");
	scanf("%d",&n);
	printf("Enetr the power : ");
	scanf("%d",&p);
	int ans = power(n,p);
	printf("%d power %d = %d",n,p,ans);
}

int power(int n,int p){
	if(p == 0){
		return 1;
	}
	else{
		return n * power(n,p-1);
	}
}
