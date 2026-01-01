//11.	Find the GCD (Greatest Common Divisor) of two numbers
#include <stdio.h>
void main(){
    int a, b, gcd;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= (a < b ? a : b); i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    printf("The GCD of %d and %d is: %d\n", a, b, gcd);
}