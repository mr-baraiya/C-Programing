//5. Swap two arrays using pointers.(C)
#include <stdio.h>
void main(){
	int n = 0,i=0;
	printf("Enter the size Of Array : ");
	scanf("%d",&n);
	
	//Array1
	int arr1[n];
	printf("\nEnter the value in Array1 : \n");
	for(i=0;i<n;i++){
		printf("Enter the Number at index %d :",i);
		scanf("%d",&arr1[i]);
	}
	
	//Array2
	int arr2[n];
	printf("\nEnter the value in Array2 : \n");
	for(i=0;i<n;i++){
		printf("Enter the Number at index %d :",i);
		scanf("%d",&arr2[i]);
	}
	//swap using pointer
	int *ptr1 = arr1;
	int *ptr2 = arr2;
	int temp = 0;
	for(i=0;i<n;i++){
		temp = *(ptr2+i);
		*(ptr2+i) = *(ptr1+i);
		*(ptr1+i) = temp; 
	}
	
	//Print Array1
	printf("\nArray1 : \n");
	for(i=0;i<n;i++){
		printf("%d ",arr1[i]);
	}
	
	//Print Array2
	printf("\nArray2 : \n");
	for(i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}
}
