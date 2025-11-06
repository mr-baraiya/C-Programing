//5. Write a program to reverse the elements of an array.
#include <stdio.h>
void main() {
    int n, i, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Reversing the array
    for(i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("The reversed array is:\n");
    for(i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
}