// 17.	Find the sum of series 1 – 2 + 3 – 4 + 5 – 6 + … ± n
#include <stdio.h>
void main(){
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum -= i; // Subtract even numbers
        } else {
            sum += i; // Add odd numbers
        }
    }
    printf("The sum of the series 1 - 2 + 3 - 4 + ... + %d is: %d\n", n, sum);
}