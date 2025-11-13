// Write a program that should decode the given pattern and print the resulting expanded string. 
// Input: 2a3bc4dE5F2G7H 
// Output: aabbbcddddEFFFFFGGHHHHHHH 
#include <stdio.h>
#include <ctype.h>
void main() {
    char input[100], output[500];
    int i = 0, j = 0;

    printf("Enter the encoded string: ");
    scanf("%s", input);

    while (input[i] != '\0') {
        if (isdigit(input[i])) {
            int count = input[i] - '0';
            i++;
            if (input[i] != '\0' && isalpha(input[i])) {
                for (int k = 0; k < count; k++) {
                    output[j++] = input[i];
                }
            }
        } else if (isalpha(input[i])) {
            output[j++] = input[i];
        }
        i++;
    }
    output[j] = '\0';

    printf("Decoded string: %s\n", output);
}