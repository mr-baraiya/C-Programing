//6. Find reverse of any number using recursion.?(C)
#include<stdio.h>

int reverseNumber(int ,int);

void main(){
	int n=0;
	printf("Enter the Number : ");
	scanf("%d",&n);
	int rev = reverseNumber(n,0);
	printf("%d",rev);
}

int reverseNumber (int n,int rev){
	if (n==0){
    	return rev;
	}
	rev=rev*10+(n%10);
	return reverseNumber(n/10,rev);

}
