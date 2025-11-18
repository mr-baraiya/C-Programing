// Given a non-negative integer x, compute and return the square root of x. Since the return type is an 
// integer, the decimal digits are truncated, and only the integer part of the result is returned. Note: You 
// are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5. 
#include <stdio.h>
int mySqrt(int x) {
    if (x == 0 || x == 1) {
        return x;
    }
    
    int left = 1, right = x, result = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (mid <= x / mid) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}
void main() {
    int x;
    printf("Enter a non-negative integer: ");
    scanf("%d", &x);
    
    int sqrtResult = mySqrt(x);
    printf("The square root of %d is %d\n", x, sqrtResult);
}