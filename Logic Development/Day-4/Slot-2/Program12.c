//12. Write a program to merge two arrays into a single array.
#include <stdio.h>
void main() {
    int n1, n2, i, j;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    
    int arr1[n1];
    
    printf("Enter %d elements for the first array:\n", n1);
    for(i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    
    int arr2[n2];
    
    printf("Enter %d elements for the second array:\n", n2);
    for(i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    
    int mergedArr[n1 + n2];
    
    for(i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        mergedArr[i + j] = arr2[j];
    }

    printf("The merged array is:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf(" %d ", mergedArr[i]);
    }
}