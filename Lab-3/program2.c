//2. Pass an array in function to print array elements.?(A)
#include <stdio.h>

void printArray(int [],int);

void main(){
	int size = 7;
	int arr[7] = {12,34,56,32,12,67,89};
	printArray(arr,size);
}

void printArray(int arr[],int size){
	int i = 0;
	for(i=0;i<=size;i++){
		printf("%d ",arr[i]);
	}
}
