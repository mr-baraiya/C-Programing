// 6. Write a program to count the total number of digits in a given number.
#include <stdio.h>

int countDigits(int n) {
    if (n < 0) n = -n;

    if (n == 0) return 0;

    return 1 + countDigits(n / 10);
}

void main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n == 0)
        printf("Count of Digits: 1");
    else
        printf("Count of Digits: %d", countDigits(n));
}
