//6. Write a program to copy all elements from one array to another.
#include <stdio.h>
void main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];
    
    printf("Enter %d elements for the first array:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    // Copying elements from arr1 to arr2
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("The elements of the second array are (copied from the first array):\n");
    for(i = 0; i < n; i++) {
        printf(" %d ", arr2[i]);
    }
}