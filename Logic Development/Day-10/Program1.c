// 1. Write a program to find the factorial of a number.
#include <stdio.h>

long long fact(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}

void main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
        return;
    }

    printf("Factorial of %d is = %lld", n, fact(n));
}

