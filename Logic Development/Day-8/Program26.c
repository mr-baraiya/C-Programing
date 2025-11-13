// Find the difference between the second largest element and the second smallest element of an array. 
// Input :  Enter the size of array: 7 
// Enter 7 elements: 5 1 9 7 1 5 3 
// Output: Difference: 4 
#include <stdio.h>
#include <limits.h>
void main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int firstMin = INT_MAX, secondMin = INT_MAX;
    int firstMax = INT_MIN, secondMax = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] < secondMin && arr[i] != firstMin) {
            secondMin = arr[i];
        }

        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    if (secondMin == INT_MAX || secondMax == INT_MIN) {
        printf("Not enough distinct elements to find second min or max.\n");
    } else {
        int difference = secondMax - secondMin;
        printf("Difference: %d\n", difference);
    }
}