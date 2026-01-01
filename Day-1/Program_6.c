//6.	Perform multiplication without using * operator
#include <stdio.h>
void main(){
    int a, b, i, product = 0;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    for(i = 1; i <= b; i++){
        product += a;
    }
    printf("The product of %d and %d is: %d\n", a, b, product);
}