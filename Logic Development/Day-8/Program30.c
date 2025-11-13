// WAP to check whether number is present in array or not (using recursion only) and the function’s syntax 
// is given below 
// int isInArray(int a [], int m); Where int a [] is Array of integer and m is element to be searched.
#include <stdio.h>

int isInArray(int a[], int m, int size) {
    if (size == 0) {
        return 0;
    }
    if (a[size - 1] == m) {
        return 1;
    }
    return isInArray(a, m, size - 1);
}
void main() {
    int size, m;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &m);

    if (isInArray(arr, m, size)) {
        printf("Element %d is present in the array.\n", m);
    } else {
        printf("Element %d is not present in the array.\n", m);
    }
}
