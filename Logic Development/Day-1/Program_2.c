//2.	Find factorial of a given number (n!)
#include <stdio.h>
void main(){
    int i, num;
    double factorial = 1.0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        factorial *= i;
    }
    printf("The factorial of %d is: %.0f\n", num, factorial);
}