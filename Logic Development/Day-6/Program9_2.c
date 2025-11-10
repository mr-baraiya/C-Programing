// 9.WAP to Convert a Hexa-decimal to Decimal. 
#include <stdio.h>
#include <ctype.h>
void main() {
    char hexaNum[32];
    printf("Enter the Hexa-decimal number: ");
    scanf("%s", hexaNum);

    int decimal = 0;
    int base = 1; // 16^0
    int length = 0;

    // Find length of hexa-decimal number
    while (hexaNum[length] != '\0') {
        length++;
    }

    // Convert hexa-decimal to decimal
    for (int i = length - 1; i >= 0; i--) {
        char ch = toupper(hexaNum[i]);
        int value;

        if (ch >= '0' && ch <= '9') {
            value = ch - '0';
        } else if (ch >= 'A' && ch <= 'F') {
            value = ch - 'A' + 10;
        } else {
            printf("Invalid Hexa-decimal digit: %c\n", ch);
            return;
        }

        decimal += value * base;
        base *= 16;
    }

    printf("Decimal representation: %d\n", decimal);
}