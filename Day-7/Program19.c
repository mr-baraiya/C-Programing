// write a program to print following pattern 
// For n=5 
// 1 2 3 4 5 
// 10 9 8 7 6 
// 11 12 13 14 15 
// 20 19 18 17 16 
// 21 22 23 24 25
#include <stdio.h>
void main() {
    int n;
    printf("Enter the number of rows (middle line count): ");
    scanf("%d", &n);
    int size = n;

    int num = 1;
    for (int i = 1; i <= size; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= size; j++) {
                printf("%3d ", num++);
            }
        } else {
            int start = num + size - 1;
            for (int j = 1; j <= size; j++) {
                printf("%3d ", start--);
                num++;
            }
        }
        printf("\n");
    }
}