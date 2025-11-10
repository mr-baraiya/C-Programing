// WAP to find weather given number is Automorphic or not. 
// An automorphic number is a number whose square ends with the same digits as the number itself.  
// For example, 5 is automorphic because 5² = 25, which ends in 5.  
// Similarly, 76 is automorphic because 76² = 5776, which ends in 76.
#include <stdio.h>

void main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Given number %d is Not an Automorphic Number.\n", n);
        return;
    }

    int sq = n * n;
    int temp = n;
    
    while (temp != 0) {
        if (temp % 10 != sq % 10) {
            printf("Given number %d is Not an Automorphic Number.\n", n);
            return;
        }
        temp /= 10;
        sq /= 10;
    }

    printf("Given number %d is an Automorphic Number.\n", n);
}
