#include <stdio.h>
int add(int);

void main(){
	int n = 10;
	int ans = add(n);
	printf(" ans = %d",ans);
}

int add(int n){
	if(n == 0){
		return 0;
	}
	else{
		return n + add(n-1);
	}
}
