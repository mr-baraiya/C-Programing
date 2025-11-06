//8. Write a program to sort array elements in ascending order.
//Sorting using Bubble Sort algorithm
#include <stdio.h>
void main() {
    int n, i, j, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Bubble Sort algorithm
    for(i = 0; i < n - 1; i++) {
        int swapped = 0;
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0) {
            break;
        }
    }

    printf("The sorted array in ascending order is:\n");
    for(i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
}