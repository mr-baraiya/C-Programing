//3.	Print sum series 1 + 4 + 9 + 16 + … + n
#include <stdio.h>
void main(){
    int i, n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        sum += i * i;
    }
    printf("The sum of the series 1 + 4 + 9 + ... + %d^2 is: %d\n", n, sum);
}