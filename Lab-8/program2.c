//2. Store n elements in an array and print the elements using pointer.(A)
#include <stdio.h>
void main(){
	int n = 0,i = 0;
	printf("Enter the Size of Array : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter the value at Index %d :",i);
		scanf("%d",&arr[i]);
	}
	
	//Print Array
	//arr[i] = *(ptr + i)
	
	printf("\nArray : \n");
	int *ptr = arr;
	for(i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
}
