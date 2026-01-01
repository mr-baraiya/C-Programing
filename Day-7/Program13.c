// Implement a following pattern 
// * * * * * * * 
//   *       *  
//     *   *  
//       *    
//     *   *   
//   *       *             
// * * * * * * * 
#include <stdio.h>

void main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++)
            printf(" ");

        for (int j = i; j <= n; j++) {
            if (i == 1 || j == i || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    // Lower half (excluding middle line)
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j < i; j++)
            printf(" ");

        for (int j = i; j <= n; j++) {
            if (i == 1 || j == i || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
