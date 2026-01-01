//2. Power without using multiplication and power operator
#include <stdio.h>

int power(int base, int exponent);
int multiply(int a, int b);

void main(){
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf("%d %d",&base,&exponent);
    int result = power(base, exponent);
    printf("%d raised to the power %d is: %d\n", base, exponent, result);
}

int power(int base, int exponent){
    if(exponent == 0) return 1; // Any number to the power of 0 is 1
    int result = base;
    for(int i=1; i<exponent; i++){
        result = multiply(result, base);
    }
    return result;
}

int multiply(int a, int b){
    int product = 0;
    for(int i=0; i<b; i++){
        product += a;
    }
    return product;
}