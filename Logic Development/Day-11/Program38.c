// Write a Function that returns either 1 or 0 based on following condition if the array is in ascending order 
// and occurrence of that number at least 3 then it should return 1 otherwise it should return 0.  
// e.g. if A=[1,1,1,2,2] it should return 0, if A= [1,1,1,3,3,3,3] it should return 1. 
#include <stdio.h>

int checkArray(int arr[], int n) {
    int i, count = 1;

    for (i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            return 0;
    }

    for (i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            if (count < 3)
                return 0;
            count = 1;
        }
    }

    if (count < 3)
        return 0;

    return 1;
}

void main() {
    int n, i, arr[100];

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("%d\n", checkArray(arr, n));
}
