//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5
#include <stdio.h>
void main() {
    int i, j, num, space,n=0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(space = 1; space <= n - i; space++) {
            printf("  ");
        }
        // Print increasing numbers
        num = i;
        for(j = 1; j <= i; j++) {
            printf("%2d ", num);
            num++;
        }
        // Print decreasing numbers
        num -= 2;
        for(j = 1; j < i; j++) {
            printf("%2d ", num);
            num--;
        }
        printf("\n");
    }
}