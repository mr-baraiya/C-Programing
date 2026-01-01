//       1
//     2 1 2
//   3 2 1 2 3
// 4 3 2 1 2 3 4
#include <stdio.h>
void main() {
    int i, j, num, space, n = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(space = 1; space <= n - i; space++) {
            printf("  ");
        }
        // Print decreasing numbers
        num = i;
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }
        // Print increasing numbers
        num += 2;
        for(j = 1; j < i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}
