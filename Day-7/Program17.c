// Write a program to print Pascal triangle.
#include <stdio.h>

int fact(int n) {
    if (n == 0) return 1;
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans *= i;
    return ans;
}

int ncr(int n, int r) {
    if (r == 0 || r == n) return 1;
    return fact(n) / (fact(r) * fact(n - r));
}


void main(){
    int n=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for (int j = i; j < n; j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",ncr(i,j));
        }
        printf("\n");
    }
}