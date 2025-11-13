#include <stdio.h>

void sortDesc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortAsc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main() {
    int n;
    printf("Enter the number of digits: ");
    scanf("%d", &n);

    int digits[n];
    printf("Enter the digits: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &digits[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += digits[i];

    sortAsc(digits, n);

    int rem = sum % 3;

    if (rem != 0) {
        int removed = 0;

        for (int i = 0; i < n; i++) {
            if (digits[i] % 3 == rem) {
                digits[i] = -1;
                removed = 1;
                break;
            }
        }

        if (!removed) {
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (digits[i] % 3 == (3 - rem)) {
                    digits[i] = -1;
                    count++;
                    if (count == 2) break;
                }
            }
            if (count != 2) {
                printf("No arrangement forms a number divisible by 3.\n");
                return;
            }
        }
    }

    int result[20], k = 0;
    for (int i = 0; i < n; i++)
        if (digits[i] != -1)
            result[k++] = digits[i];

    if (k == 0) {
        printf("No arrangement forms a number divisible by 3.\n");
        return;
    }

    sortDesc(result, k);

    printf("Largest number divisible by 3 is: ");
    for (int i = 0; i < k; i++)
        printf("%d", result[i]);
    printf("\n");
}
