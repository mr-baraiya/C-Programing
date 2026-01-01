//7.	Calculate x^y without using power operator
#include <stdio.h>

int multiply(int, int);

void main(){
    int x, y, i;
    int result = 1;
    printf("Enter base (x) and exponent (y): ");
    scanf("%d %d", &x, &y);
    for(int i = 1; i <= y; i++){
        result = multiply(result, x);
        // result = result * x;
    }
    printf("%d^%d = %d\n", x, y, result);
}

int multiply(int a, int b){
    int product = 0;
    for(int i = 1; i <= b; i++){
        product += a;
    }
    return product;
}