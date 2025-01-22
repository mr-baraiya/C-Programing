//5. Swap elements of two integer arrays using user deƒine function.?(B)
#include <stdio.h>

void swapArr(int [],int [],int);

void main(){
	int size = 10;
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[10] = {11,12,13,14,15,16,17,18,19,20};
	swapArr(arr1,arr2,size);
	int i=0;
	printf("Array 1 : \n");
	for (i=0;i<size; i++){
        printf("%d ",arr1[i]);
    }
    i=0;
    printf("\nArray 2 : \n");
	for (i=0;i<size; i++){
        printf("%d ",arr2[i]);
    }	
}

void swapArr(int a[],int b[],int size){
	int i=0;
    for (i = 0; i< size; i++){
        int temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}

