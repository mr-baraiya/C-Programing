// Given an array of positive integers arr[] of size n, the task is to find the second largest distinct element in 
// the array. 
// Note: If the second largest element does not exist, return -1. 
// Input: arr[] = [12, 35, 1, 10, 34, 1] 
// Output: 34 
// Explanation: The largest element of the array is 35 and the second largest element is 34. 
// Input: arr[] = [10, 10, 10] 
// Output: -1 
// Explanation: The largest element of the array is 10 there is no second largest element.
#include <stdio.h>

void main() {
    int n, i;
    int arr[100];
    int max1 = -1, max2 = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("%d\n", max2);
}
