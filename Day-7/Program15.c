// 1 
// 1 2 1 
// 1 * 3 * 1 
// 1 * * 4 * * 1 
// 1 * * * 5 * * * 1 
// 1 * * * * 6 * * * *1 

#include <stdio.h>

void main() {
    int n;
    printf("Enter the number of rows (middle line count): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2*i-1; j++)
        if(j==1 || j == 2*i-1 || j==i){
            if(j<=i) printf("%d ", j);
            else printf("%d ", 2*i-j);
        }else{
            printf("* ");
        }
        printf("\n");
    }
}
