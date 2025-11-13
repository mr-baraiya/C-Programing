// 4. Write a program to find the sum of digits of a given number.
#include <stdio.h>

int sumOfDigits(int n) {
    if (n < 0)
        n = -n;

    if (n == 0)
        return 0;

    return (n % 10) + sumOfDigits(n / 10);
}

void main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Sum of digits of %d is = %d", n, sumOfDigits(n));
}
