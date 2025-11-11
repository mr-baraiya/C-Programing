// Given two integer arrays nums1 and nums2, return an array of their intersection.  
// Each element in the result must appear as many times as it shows in both arrays and you may return the 
// result in sorted order. 
#include <stdio.h>

void main() {
    int n1, n2, i, j, k = 0;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n1 - 1; i++) {
        for (j = i + 1; j < n1; j++) {
            if (arr1[i] > arr1[j]) {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    for (i = 0; i < n2 - 1; i++) {
        for (j = i + 1; j < n2; j++) {
            if (arr2[i] > arr2[j]) {
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    int intersection[n1 < n2 ? n1 : n2];
    i = j = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] == arr2[j]) {
            intersection[k++] = arr1[i];
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    if (k == 0)
        printf("\nNo common elements.\n");
    else {
        printf("\nIntersection array:\n");
        for (i = 0; i < k; i++)
            printf("%d ", intersection[i]);
        printf("\n");
    }
}
