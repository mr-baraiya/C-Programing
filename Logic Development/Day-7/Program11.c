// 11 Implement a following pattern 
// For n=5 
// 1 
// 2   6 
// 3   7   10 
// 4   8   11  13 
// 5   9   12  14   15
// For n=4 
// 1 
// 2   5 
// 3   6   8 
// 4   7   9  10 
#include <stdio.h>
void main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = i;
        for (int j = 1; j <= i; j++) {
            printf("%d\t", num);
            num += (n - j);
        }
        printf("\n");
    }
}