// Find a next lexicographical order string from a given string, if input is abc output is acb (2 conditions must 
// be followed: the string must be greater than the inputted string and the outputted string must be the 
// smallest string from all possible strings). 
#include <stdio.h>
#include <string.h>
void swap(char* x, char* y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
void reverse(char* str, int start, int end) {
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}
int nextPermutation(char* str) {
    int n = strlen(str);
    int i = n - 2;

    while (i >= 0 && str[i] >= str[i + 1]) {
        i--;
    }

    if (i < 0) {
        return 0;
    }

    int j = n - 1;
    while (str[j] <= str[i]) {
        j--;
    }

    swap(&str[i], &str[j]);
    reverse(str, i + 1, n - 1);
    return 1;
}
void main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (nextPermutation(str)) {
        printf("Next lexicographical permutation: %s\n", str);
    } else {
        printf("No next permutation exists.\n");
    }
}