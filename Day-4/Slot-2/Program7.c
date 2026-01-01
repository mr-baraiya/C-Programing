//7. Write a program to search a given element in an array (Linear Search).
#include <stdio.h>
void main() {
    int n, i, searchElement;
    int found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == searchElement) {
            printf("Element %d found in the array at index : %d\n", searchElement, i);
            return;
        }
    }
    printf("Element %d not found in the array.\n", searchElement);
}