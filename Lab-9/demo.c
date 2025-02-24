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
	
	int sum [m][n];
	int *p1 = &arr1;
	int *p2 = arr2;
	int *p3 = &sum;
	
//	printf("Pointer address: %d",p1);
	printf("Without n:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",(p1+i+j));
		}
		printf("\n");
	}	

	printf("\n\nWith n:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",(p1+i*n+j));
		}
		printf("\n");
	}	
	
	
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			scanf("%d",(p1+i*n+j));
//		}
//	}
//	
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			printf("%d\t",*(p1+i*n+j));
//		}
//		printf("\n");
//	}
	
	
}
