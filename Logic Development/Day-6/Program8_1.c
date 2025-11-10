// 8. WAP to Convert a Decimal to Octal.
#include <stdio.h>
void main() {
    int n;
    printf("Enter the Decimal number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative numbers cannot be converted to Octal.\n");
        return;
    }

    int octalNum[32];
    int i = 0;

    // Convert decimal to octal
    while (n != 0) {
        octalNum[i] = n % 8;
        n /= 8;
        i++;
    }

    printf("Octal representation: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
    printf("\n");
}