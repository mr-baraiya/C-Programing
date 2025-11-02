//15.	Check whether a number is Prime or Not
#include <stdio.h>
void main(){
    int num, flag = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if(num <= 1){
        flag = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for(int i = 2; i <= num / 2; i++){
            if(num % i == 0){
                flag = 0; // Found a divisor, not prime
                break;
            }
        }
    }
    if(flag){
        printf("%d is a Prime Number.\n", num);
    } else {
        printf("%d is not a Prime Number.\n", num);
    }
}