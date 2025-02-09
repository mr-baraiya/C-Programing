//4. Copy one array to another using pointers.(B)
#include <stdio.h>
void main(){
	int n=0,i=0;
	printf("Enter the size Of Array : ");
	scanf("%d",&n);
	int arr1[n];
	for(i=0;i<n;i++){
		printf("Enter the Number at index %d :",i);
		scanf("%d",&arr1[i]);
	}
	
	int arr2[n];
	int *ptr1 = &arr1;
	int *ptr2 = arr2;
	
	for(i=0;i<n;i++){
		*(arr2+i) = *(arr1+i);
	}
	printf("\nCopy of Array1 : ");
	for(i=0;i<n;i++){
		printf("%d  ",arr2[i]);
	}
}




// arr = &arr
// Array Name = address of first elemant of array 
//*(arr+1) = arr[1]

