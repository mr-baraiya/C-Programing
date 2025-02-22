//2. Calculate the sum of n numbers entered by the user using malloc().(A)
#include <stdio.h>
#include <stdlib.h>

void main(){
	int *p,n=0,i=0,sum=0;
	printf("Enter the Number : ");
	scanf("%d",&n);
	// Allocate Mamory
	p = (int *) malloc(n * sizeof(int));
	if(p == NULL){
		printf("Memmory Allocation Is Failed.\n");
		return;
	}
	
//	p[i] = *(p+i)
//	&p[i] = (p+i)

	for(i=0;i<n;i++){
		printf("Enter the Number in %d : ",i);
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++){
		sum = sum + p[i]);
	}
	printf("Sum = %d",sum);
	// Deallocate memory
	free(p);
}
