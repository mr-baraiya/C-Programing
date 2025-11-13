// 5. Write a program to find the power of a number (x^y) without using library functions.
#include <stdio.h>

double power(int base, int exp) {
    if (exp == 0)
        return 1;
    else if (exp > 0)
        return base * power(base, exp - 1);
    else
        return 1.0 / power(base, -exp);
}

void main() {
    int base, exp;
    printf("Enter the number: ");
    scanf("%d", &base);

    printf("Enter the Power: ");
    scanf("%d", &exp);

    printf("%d ^ %d = %.4f", base, exp, power(base, exp));
}
