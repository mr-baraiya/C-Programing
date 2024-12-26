//3. Calculate the sum of n numbers entered by the user using calloc().(A)
#include<stdio.h>
#include<stdlib.h>

void main(){
	int n=0,i=0,sum=0;
	printf("Enter the Number : ");
	scanf("%d",&n);
	int *ptr = (int *)calloc(n , sizeof(int));
	if( ptr == NULL){
		printf("Memory allocation failed.\n");
	}
	printf("Enter %d numbers:\n", n);
    for (i = 0; i< n; i++) {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }
	printf("Sum of numbers: %d\n", sum);
	// Deallocate memory
    free(ptr); 
}
