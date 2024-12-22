//7. Find maximum and minimum value from array.
#include <stdio.h>

void main(){
	int size = 0;
	printf("Enter the Size Of Array : ");
	scanf("%d",&size);
	int arr[size];
	int i = 0;
	//Get the Array From The User
	for(i=0 ; i<size ; i++){
		printf("Enter the Number At index %d : ",i);
		scanf("%d",&arr[i]);
	}
	//Find Max and Min
	int max = arr[0];//let that first elemant in array is maximum
	int min = arr[0];//let that first elemant in array is minimum
	
	for(i=0 ; i<size ; i++){
		if(max < arr[i]){
			max = arr[i];
		}
		if(min > arr[i]){
			min = arr[i];
		}
	}
	//Print Max and Min
	printf("Min Number In Array = %d \n",min);
	printf("Max Number In Array = %d",max);
}
