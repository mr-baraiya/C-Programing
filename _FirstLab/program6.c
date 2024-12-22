//6. Count number of even or odd number from an array of n numbers.
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
	//Find Even Or Odd
	int countOfOdd = 0;
	int countOfEven = 0;
	
	for(i=0 ; i<size ; i++){
		if(arr[i]%2 == 0){
			countOfEven++;
		}
		else{
			countOfOdd++;
		}
	}
	//Print The Count
	printf("Odd Numbers In Array = %d \n",countOfOdd);
	printf("Even Numbers In Array = %d",countOfEven);
}
