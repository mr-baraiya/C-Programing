//1. Allocate and de-allocate memory for int, char and float variable at run time. (A)
#include<stdio.h>
#include<stdlib.h>

void main(){
	// Allocate memory
	char *charPtr = (char *)malloc(sizeof(char));
	int *intPtr = (int *)malloc(sizeof(int));
	float *floatPtr = (float *)malloc(sizeof(float));
	// Assign values
    if (intPtr&&charPtr&&floatPtr) {
    	*charPtr = 'A';
        *intPtr = 42;
        *floatPtr = 3.14;

        // Print values
        printf("Integer: %d\n", *intPtr);
        printf("Character: %c\n", *charPtr);
        printf("Float: %.2f\n", *floatPtr);
    } 
	else {
        printf("Memory allocation failed.\n");
    }
	// Free memory
    free(intPtr);
    free(charPtr);
    free(floatPtr);
}
