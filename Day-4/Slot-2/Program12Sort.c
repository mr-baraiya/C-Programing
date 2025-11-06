#include <stdio.h>

void main() {
    int n1, n2, i, j, k;

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
    i = 0;
    j = 0;
    k = 0;

    // Merging two sorted arrays
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // Copy remaining elements (if any)
    while(i < n1) {
        mergedArr[k++] = arr1[i++];
    }
    while(j < n2) {
        mergedArr[k++] = arr2[j++];
    }

    printf("The merged array is:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");
}
