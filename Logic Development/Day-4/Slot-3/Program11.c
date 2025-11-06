// 11. Write a program to sort array elements using the selection sort technique
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
    int minIndex = 0;
    for(int i=0;i<n;i++){
        minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        if(i != minIndex){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
