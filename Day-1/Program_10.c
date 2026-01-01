//10.	Find the sum of all divisors of a number
#include <stdio.h>
void main(){
    int num=0,sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are:\n", num);
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    printf("Sum of all divisors of %d is: %d\n", num, sum);
}