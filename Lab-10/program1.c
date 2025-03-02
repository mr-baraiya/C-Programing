//1. Allocate and de-allocate memory for int, char and float variable at run time. (A)
#include <stdio.h>
#include <stdlib.h>

void main(){
	char 	*p_char;
	int 	*p_int;
	float 	*p_float;
	
	//Aloocate Memory
	p_char 	= 	(char 	*) 	malloc(sizeof(char));
	p_int 	= 	(int 	*) 	malloc(sizeof(int));
	p_float = 	(float 	*) 	malloc(sizeof(float));
	
	if(p_char == NULL || p_int == NULL || p_float == NULL){
		printf("Memmory Allocation Is Failed.\n");
		return;
	}
	
	printf("Enter The Character : ");
	scanf("%c",p_char);
	printf("Enter the Integer : ");
	scanf("%d",p_int);
	printf("Enter the Float Number : ");
	scanf("%f",p_float);
	
	printf(" p_char  = %c \n",*p_char);
	printf(" p_int   = %d \n",*p_int);
	printf(" p_float = %.2f \n",*p_float);
	
	//Free Memory
	free(p_char);
	free(p_int);
	free(p_float);
}
