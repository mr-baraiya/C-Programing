// WAP to find weather given number is Pronic or not. 
// A Pronic Number is defined as a number that is the product of two consecutive non-negative integers. In 
// other words, N is a Pronic Number if there exists a non-negative integer k such that N = k * (k + 1).  
// E.g. 6 is a Pronic Number because 6=2*3 
#include <stdio.h>

void main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Given number %d is Not a Pronic Number.\n", n);
        return;
    }

    int isPronic = 0;

    for (int i = 0; i * (i + 1) <= n; i++) {
        if (n == i * (i + 1)) {
            isPronic = 1;
            break;
        }
    }

    if (isPronic)
        printf("Given number %d is a Pronic Number.\n", n);
    else
        printf("Given number %d is Not a Pronic Number.\n", n);
}