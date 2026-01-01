#include <stdio.h>

void main() {
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int visited[n];

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int dupFound = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                dupFound = 1;
            }
        }

        if (dupFound)
            count++;
    }

    printf("\nTotal number of duplicate elements: %d\n", count);
}
