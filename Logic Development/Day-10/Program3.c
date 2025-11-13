// 3. Write a program to generate the Fibonacci series up to N terms.
#include <stdio.h>

void fibonacci(int n, int a, int b) {
    if (n == 0) return;

    printf("%d ", a);
    fibonacci(n - 1, b, a + b);
}

void main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.");
        return;
    }

    fibonacci(n, 0, 1);
}
