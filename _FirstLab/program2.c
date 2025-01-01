//2.Find out largest number from given three numbers.
#include <stdio.h>
void main(){
	int n1=0,n2=0,n3=0;
	printf("Enter The First Number : ");
	scanf("%d",&n1);
	printf("Enter The Second Number : ");
	scanf("%d",&n2);
	printf("Enter The Third Number : ");
	scanf("%d",&n3);
	
	if(n1>n2){
		if(n1>n3){
			printf("%d is Largest Number.",n1);
		}
		else{
			printf("%d is Largest Number.",n3);
		}
	}
	else{
		if(n2>n3){
			printf("%d is Largest Number.",n2);
		}
		else{
			printf("%d is Largest Number.",n3);
		}
	}
}
