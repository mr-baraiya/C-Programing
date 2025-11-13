// Given an integer n, return the least number of perfect square numbers that sum to n.  
// Input: n = 12 Output: 3 Explanation: 12 = 4 + 4 + 4. 
// Input: n = 13 Output: 2 Explanation: 13 = 4 + 9. 
#include <stdio.h>
#include <math.h>
int isPerfectSquare(int x) {
    int s = (int)sqrt(x);
    return (s * s == x);
}
int numSquares(int n) {
    if (isPerfectSquare(n))
        return 1;

    for (int i = 1; i * i <= n; i++) {
        if (isPerfectSquare(n - i * i))
            return 2;
    }

    while (n % 4 == 0)
        n /= 4;

    if (n % 8 == 7)
        return 4;

    return 3;
}
void main() {
    int n;
    printf("Enter the integer n: ");
    scanf("%d", &n);
    int result = numSquares(n);
    printf("Least number of perfect square numbers that sum to %d is: %d\n", n, result);
}