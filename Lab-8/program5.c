//5. Sort array using pointers.(B)
#include <stdio.h>
void main(){
	int n = 0,i = 0,j = 0;
	printf("Enter the Size of Array : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter the value at Index %d :",i);
		scanf("%d",&arr[i]);
	}
	//Sort Array By Selection Sort
	int *ptr = arr;
	int minIdx = 0,temp = 0;
	for(i=0;i<n-1;i++){
		minIdx = i;
		for(j=i+1;j<n;j++){
			if(*(ptr+j) < *(ptr+minIdx)){
				minIdx = j;
			}
		}
		//swap the number
		if(minIdx != i){
			temp = *(ptr+i);
			*(ptr+i) = *(ptr+minIdx);
			*(ptr+minIdx) = temp;
		}
	}
	
	//Print Array
	printf("\nArray : \n");
	for(i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
}
