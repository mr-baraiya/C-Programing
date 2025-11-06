//9. Write a program to find the second largest and second smallest elements in an array.
#include <stdio.h>
void main() {
    int n, i;
    int largest, secondLargest, smallest, secondSmallest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    largest = -999999;
    secondLargest = -999999;

    smallest = 9999999;
    secondSmallest = 9999999;

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if(secondLargest == largest) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element in the array is: %d\n", secondLargest);
    }

    if(secondSmallest == smallest) {
        printf("There is no second smallest element in the array.\n");
    } else {
        printf("The second smallest element in the array is: %d\n", secondSmallest);
    }
}
