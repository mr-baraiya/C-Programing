// 8. WAP to Convert a Octal to Decimal.
#include <stdio.h>
void main() {
    int n;
    printf("Enter the Octal number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Negative numbers cannot be converted from Octal to Decimal.\n");
        return;
    }
    
    int decimal = 0;
    int base = 1; // 8^0

    while (n != 0) {
        decimal += (n % 10) * base;
        n /= 10;
        base *= 8;
    }

    printf("Decimal representation: %d\n", decimal);
}