// 4. Write a program to count total even and odd numbers in an array.
#include <stdio.h>
void main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total even numbers in the array: %d\n", evenCount);
    printf("Total odd numbers in the array: %d\n", oddCount);
}