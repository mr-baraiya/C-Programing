//11. Write a program to delete an element from a specific position in an array.
#include <stdio.h>
void main() {
    int n, i, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to delete the element from (1 to %d): ", n);
    scanf("%d", &position);
    
    if(position < 1 || position > n) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n);
        return;
    }
    
    for(i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    printf("The array after deletion is:\n");
    for(i = 0; i < n - 1; i++) {
        printf(" %d ", arr[i]);
    }
}