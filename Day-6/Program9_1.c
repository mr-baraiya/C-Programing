// 9.WAP to Convert a Decimal to Hexa-decimal. 
#include <stdio.h>

void main() {
    int n;
    printf("Enter the Decimal number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative numbers cannot be converted to Hexa-decimal.\n");
        return;
    }

    char hexaNum[32];
    int i = 0;

    // Convert decimal to hexa-decimal
    while (n != 0) {
        int remainder = n % 16;
        if (remainder < 10)
            hexaNum[i] = remainder + '0';
        else
            hexaNum[i] = remainder - 10 + 'A';
        n /= 16;
        i++;
    }

    printf("Hexa-decimal representation: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexaNum[j]);
    printf("\n");
}