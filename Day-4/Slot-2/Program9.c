// 9. Write a program to find the second largest and second smallest elements in an array.
#include <stdio.h>
#include <limits.h>

void main() {
    int n, i;
    int largest, secondLargest, smallest, secondSmallest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = INT_MIN;
    smallest = secondSmallest = INT_MAX;

    for (i = 0; i < n; i++) {
        // For largest and second largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        // For smallest and second smallest
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        printf("There is no second largest element (all elements are same).\n");
    else
        printf("The second largest element in the array is: %d\n", secondLargest);

    if (secondSmallest == INT_MAX)
        printf("There is no second smallest element (all elements are same).\n");
    else
        printf("The second smallest element in the array is: %d\n", secondSmallest);

}
