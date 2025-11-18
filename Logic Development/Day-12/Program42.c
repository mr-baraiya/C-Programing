// Given an integer n, return the nth digit of the infinite integer sequence [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, …]. 
// Input: n = 11 => Output: 0 
// Explanation: The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is a 0, which is part of the 
// number 10. 
#include <stdio.h>

int findNthDigit(int n) {
    long long digit = 1, start = 1, count = 9;

    while (n > count) {
        n -= count;
        digit++;
        start *= 10;
        count = 9 * start * digit;
    }

    long long num = start + (n - 1) / digit;

    char s[25];
    sprintf(s, "%lld", num);

    int index = (n - 1) % digit;
    return s[index] - '0';
}

void main() {
    int n;
    printf("Enter the position of the digit to find: ");
    scanf("%d", &n);

    int result = findNthDigit(n);
    printf("The %dth digit in the sequence is: %d\n", n, result);

}       