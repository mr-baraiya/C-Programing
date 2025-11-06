//10. Write a program to rotate array elements to the left or right.
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

    int flag = 0, temp = 0;
    do {
        printf("\nEnter your choice:\n");
        printf("0 - Display Array\n");
        printf("1 - Left Rotate\n");
        printf("2 - Right Rotate\n");
        printf("-1 - Exit\n");
        printf("Choice: ");
        scanf("%d", &flag);

        switch (flag) {
            case 0:
                printf("Array: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 1:  // Left Rotation
                temp = arr[0];
                for (int i = 0; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                arr[n - 1] = temp;
                printf("Array after Left Rotation: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:  // Right Rotation
                temp = arr[n - 1];
                for (int i = n - 1; i > 0; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[0] = temp;
                printf("Array after Right Rotation: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case -1:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid input! Try again.\n");
                break;
        }

    } while (flag != -1);
}
