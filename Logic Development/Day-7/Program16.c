// *       * * * * 
// *       *       
// *       *       
// * * * * * * * * *
//         *       *
//         *       *
// * * * * *       *

#include <stdio.h>

void main() {
    int n;
    printf("Enter the number of rows (middle line count): ");
    scanf("%d", &n);
    int mid = n/2 + 1;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if((i<mid && j==1) ||
            (i==mid) ||
            (i==1 && j>mid) ||
            (i==n && j<mid) ||
            (j==mid) ||
            (i>mid && j==n)){
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
}

