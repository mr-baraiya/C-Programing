//2. Pass an array in function to print array elements.?(A)
#include <stdio.h>

void printArray(int [],int);

void main(){
	int size = 0;
	printf("Enter the size : ");
	scanf("%d",&size);
	int arr[size];
	int i=0;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printArray(arr,size);
}

void printArray(int arr[],int size){
	int i = 0;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
