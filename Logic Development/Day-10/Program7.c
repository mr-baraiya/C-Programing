// 7. Write a program to reverse a given number and check whether it is a palindrome.
#include <stdio.h>

int reverse(int n, int rev) {
    if (n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + (n % 10));
}

void main() {
    int n, r;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive number.");
        return;
    }

    r = reverse(n, 0);

    printf("Reversed number = %d\n", r);

    if (r == n)
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is NOT a Palindrome\n", n);
}
