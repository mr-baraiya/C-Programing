// Given an array arr[], the task is to reverse the array. Reversing an array means rearranging the elements 
// such that the first element becomes the last, the second element becomes second last and so on. (Do 
// not use any additional Array) 
// Input: arr[] = {1, 4, 3, 2, 6, 5}   
// Output: {5, 6, 2, 3, 4, 1} 
#include <stdio.h>
void main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}