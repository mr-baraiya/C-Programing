// 10. Write a program to insert an element at a specific position in an array.
#include <stdio.h>
void main() {
    int n, i, position, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n + 1];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to insert the new element (1 to %d): ", n + 1);
    scanf("%d", &position);
    
    if(position < 1 || position > n + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n + 1);
        return;
    }
    
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    for(i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[position - 1] = element;
    
    printf("The array after insertion is:\n");
    for(i = 0; i <= n; i++) {
        printf(" %d ", arr[i]);
    }
}