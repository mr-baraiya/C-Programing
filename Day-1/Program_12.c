//12.	Find the LCM (Least Common Multiple) of two numbers
#include <stdio.h>
void main(){
    int a, b, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    lcm = (a > b) ? a : b; // Start from the maximum of a and b
    while(1){
        if(lcm % a == 0 && lcm % b == 0){
            break;
        }
        lcm++;
    }
    printf("The LCM of %d and %d is: %d\n", a, b, lcm);
}