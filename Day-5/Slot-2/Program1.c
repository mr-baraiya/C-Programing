//1. Write a program to find the frequency of each element in an array.
#include <stdio.h>

void main() {
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int arr[n];
    int freq[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] == 0)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        freq[i] = count;
    }
    
    printf("\nFrequency of each element:\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0)
            printf("%d : %d times\n", arr[i], freq[i]);
    }
}
