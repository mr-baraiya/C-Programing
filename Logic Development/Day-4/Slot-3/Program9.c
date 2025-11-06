// 9. Write a program to find the union of two arrays.

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

    int unionArr[n1 + n2];
    int k = 0;
    for(int i=0;i<n1;i++){
        unionArr[k++] = arr1[i];
    }
    for(int i=0;i<n2;i++){
        int found = 0;
        for(int j=0;j<n1;j++){
            if (arr2[i] == arr1[j])
            {
                found = 1;
            }
        }
        if(!found){
            unionArr[k++] = arr2[i];
        }
    }

    printf("\nUnion of two arrays is : \n");
    for(int i=0;i<k;i++){
        printf(" %d ",unionArr[i]);
    }
    printf("\n");
}