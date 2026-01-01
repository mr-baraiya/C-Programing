//8. Write a program to find the intersection of two arrays.
#include <stdio.h>
void main(){
    int n1,n2;
    printf("Enter the size of First Array : ");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("Enter the size of Second Array : ");
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr2[i]);
    }

    printf("\nIntersection of two arrays is : \n");
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i] == arr2[j]){
                printf(" %d ",arr1[i]);
            }
        }
    }
    printf("\n");
}