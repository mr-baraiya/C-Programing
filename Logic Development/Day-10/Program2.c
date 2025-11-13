// 2. Write a program to find the sum of first N natural numbers.
#include <stdio.h>

int add(int n) {
    if (n == 0)
        return 0;
    return n + add(n - 1);
}

void main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive number.");
        return;
    }

    printf("Sum of %d numbers is = %d", n, add(n));
}