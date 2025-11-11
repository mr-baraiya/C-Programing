// Write a program to print following pattern 
// For n=4 
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4 
#include <stdio.h>
void main() {
    int n;
    printf("Enter the number of rows (middle line count): ");
    scanf("%d", &n);
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;

            int min = top < left ? top : left;
            min = min < right ? min : right;
            min = min < bottom ? min : bottom;

            printf("%d ", n - min);
        }
        printf("\n");
    }
}