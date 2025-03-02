#include<stdio.h>
#include<stdlib.h> 

void main(){
    int a = 10;
    // Print the size of variable 'a' in bytes
    printf("Size Of a : %d \n", sizeof(a)); 

    int *p; // Declare a pointer to an integer
    // Dynamically allocate memory for one integer and typecast the void pointer to int*
    p = (int*) malloc(sizeof(int)); 
    *p = 12;
    printf(" %d ",*p);
    free(p);//Free Memory
}

