//2. Write a program to find the sum and average of elements in an array.
#include <stdio.h>
void main() {
    int n, i;
    int sum = 0;
    float average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    average = (float)sum / n;

    printf("The sum of the elements is: %d\n", sum);
    printf("The average of the elements is: %.2f\n", average);
}