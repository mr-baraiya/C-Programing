//3. Calculate the sum of n numbers entered by the user using calloc().(A)
#include <stdio.h>
#include <stdlib.h>

void main(){
	int *p,n=0,i=0,sum=0;
	printf("Enter the Number : ");
	scanf("%d",&n);
	// Allocate Mamory
	p = (int *) calloc(n,sizeof(int));
	if(p == NULL){
		printf("Memory Allocation Failed.\n");
		return;
	} 
	for (i=0;i<n;i++){
		printf("Enter the number in %d : ",i);
		scanf("%d",&p[i]);
	}
	for (i=0;i<n;i++){
		sum = sum + p[i];
	}
	printf("Sum = %d",sum);
	// Deallocate memory
	free(p);
}
