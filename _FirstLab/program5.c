//5.Print sum of 1 to n numbers.
#include <stdio.h>
void main(){
	int n=0;
	printf("Enter the Number : ");
	scanf("%d",&n);
	int i=0,sum=0;
	for(i=1 ; i<=n ; i++){
		sum = sum + i;
	}
	printf("Sum of 1 to %d is = %d",n,sum);
	
	//printf("\nSum of 1 to %d is = %f",n,((n*(n+1))/2.0));
}
