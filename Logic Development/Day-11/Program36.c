// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose 
// sum is equal to K.  
// Input: N = 4, K = 6, arr[] = {1, 5, 7, 1} Output: 2
#include <stdio.h>

void main() {
    int n, i, j, k;
    int arr[100];
    int count = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter K: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k)
                count++;
        }
    }

    printf("Number of pairs = %d\n", count);
}
