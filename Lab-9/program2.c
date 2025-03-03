//2. Print sum of columns of a matrix using Pointers.(A)
#include<stdio.h>
void main(){
	int m=0,n=0;
	printf("Enter the Number Of Rows : ");
	scanf("%d",&m);
	printf("Enter the Number of Columns : ");
	scanf("%d",&n);
	int arr1[m][n];
	int i=0,j=0;
	//get the first Array
	printf("\nEnter the first Array : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the arr[%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	
	//calculate the sum of column arr1,arr2
	int *p1 = &arr1;
	int sum[n];
	int *p2 = &sum;
	
	for(j=0;j<n;j++){
		*(p2+j) = 0;
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			//sum[i][j] = arr1[i][j] + arr2[i][j];
			*(p2+j) += *(p1+i*n+j);
		}
	}
	//print the Matrices
	printf("Matrix 1 : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	//Print the sum Of Columns
	printf("Sum Of Columns : \n");
	for(i=0;i<n;i++){
		printf("%d ",sum[i]);
	}
}
