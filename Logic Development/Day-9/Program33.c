// Take an Input in the form of Binary String that contains only 0’s and 1’s and convert this number into 
// integer.  
// Input: 101.110 
// Output: 5.75 
#include <stdio.h>
#include <string.h>

void main() {
    char bin[100];
    int i = 0;
    int intPart = 0;
    float fracPart = 0.0f;
    float base = 0.5f;

    printf("Enter binary number: ");
    scanf("%s", bin);

    while (bin[i] != '.' && bin[i] != '\0') {
        intPart = intPart * 2 + (bin[i] - '0');
        i++;
    }

    if (bin[i] == '.') {
        i++;
        while (bin[i] != '\0') {
            fracPart += (bin[i] - '0') * base;
            base /= 2;
            i++;
        }
    }

    float result = intPart + fracPart;
    printf("%g\n", result);
}
