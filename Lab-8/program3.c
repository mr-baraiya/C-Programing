//3. Find even and odd numbers in array using pointer. (A)
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
	//Print Even Numbers
	printf("\nEven Numbers : \n");
	for(i=0;i<n;i++){
		if( *(ptr+i)%2 == 0){
			printf("%d ",*(ptr+i));
		}
	}
	//Print Odd Numbers
	printf("\nOdd Numbers : \n");
	for(i=0;i<n;i++){
		if( *(ptr+i)%2 != 0){
			printf("%d ",*(ptr+i));
		}
	}
}
