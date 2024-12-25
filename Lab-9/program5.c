//5. Find Maximum Element in a 2-D Array Using Pointers.(B)
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
	int max = arr1[0][0];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(max < *(p1+i*n+j)){
				max = *(p1+i*n+j);
			}
		}
	}
	//Print the Maximum
	printf("Maximum : %d",max);
}
