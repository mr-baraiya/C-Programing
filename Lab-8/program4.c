//4. Print positive and negative numbers in array using pointers. (A)
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
	int *ptr = arr;
	//Print Positive Numbers
	printf("\nPositive Numbers : \n");
	for(i=0;i<n;i++){
		if( *(ptr+i) >= 0){
			printf("%d ",*(ptr+i));
		}
	}
	//Print Negative Numbers
	printf("\nNegative Numbers : \n");
	for(i=0;i<n;i++){
		if( *(ptr+i) < 0){
			printf("%d ",*(ptr+i));
		}
	}
}
