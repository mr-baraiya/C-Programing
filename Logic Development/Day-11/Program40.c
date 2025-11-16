// Given 2 sorted arrays a[] and b[], each of size n, the task is to find the median of the array obtained 
// after merging a[] and b[]. 
// Input: a[] = [1, 12, 15, 26, 38], b[] = [2, 13, 17, 30, 45] 
// Output: 16 
// Explanation: The middle two elements are 15 and 17,  
// so median = (15 + 17)/2 = 16 
#include <stdio.h>

void main() {
    int n, i, j, k;

    int a[100], b[100], c[200];

    printf("Enter size of each array: ");
    scanf("%d", &n);

    printf("Enter elements of array A (sorted):\n");
    for (i = 0; i < n; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter elements of array B (sorted):\n");
    for (i = 0; i < n; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &b[i]);
    }

    i = 0;  
    j = 0;  
    k = 0;  

    while (i < n && j < n) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n) c[k++] = a[i++];
    while (j < n) c[k++] = b[j++];

    int mid1 = c[n - 1];
    int mid2 = c[n];

    float median = (mid1 + mid2) / 2.0;

    printf("Median = %.2f\n", median);
}
