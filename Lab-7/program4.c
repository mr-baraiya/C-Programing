//4. Copy one array to another using pointers.(B)
#include <stdio.h>
void main(){
	int size = 0,i=0;
	printf("Enter the size Of Array : ");
	scanf("%d",&size);
	int src[size];
	for(i=0;i<size;i++){
		printf("Enter the Number at idx %d :",i);
		scanf("%d",&src[i]);
	}
	int copy[size];
	int *srcPtr = src;
	int *copyPtr = copy;
	//*(arr+1) = arr[1]
	for(i=0;i<size;i++){
		*(copyPtr+i) = *(srcPtr+i);
	}
	printf("\nCopy Array : ");
	for(i=0;i<size;i++){
		printf("%d  ",copy[i]);
	}
}
