//1. Add two matrix using Pointers.(A)
#include<stdio.h>
void main(){
	int m=0,n=0;
	printf("Enter the Number Of Rows : ");
	scanf("%d",&m);
	printf("Enter the Number of Columns : ");
	scanf("%d",&n);
	int arr1[m][n];
	int arr2[m][n];
	int i=0,j=0;
	
	//calculate the sum of arr1,arr2
	int sum [m][n];
	int *p1 = &arr1;
	int *p2 = &arr2;
	int *p3 = &sum;
	
	//get the first Array
	printf("\nEnter the first Array : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the arr[%d][%d] : ",i,j);
			//scanf("%d",&arr1[i][j]);
			scanf("%d",(p1+i*n+j));
		}
		printf("\n");
	}
	
	//get the Second Array
	printf("\nEnter the second Array : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the arr[%d][%d] : ",i,j);
			//scanf("%d",&arr2[i][j]);
			scanf("%d",(p2+i*n+j));
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			//sum[i][j] = arr1[i][j] + arr2[i][j];
			*(p3+i*n+j) = *(p1+i*n+j) + *(p2+i*n+j);
		}
	}
	
	printf("Sum : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			//printf("%d ",sum[i][j]);
			printf("%d ",*(p3+i*n+j));
		}
		printf("\n");
	}
}
