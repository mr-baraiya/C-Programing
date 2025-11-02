//14.	Check whether a number is a Harshad Number ex. 1, 2, 4, 10, 20, 81
#include <stdio.h>
void main(){
    int num, sum = 0, temp, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0){
        digit = temp % 10;
        sum += digit;
        temp = temp / 10;
    }
    if(num % sum == 0){
        printf("%d is a Harshad Number.\n", num);
    } else {
        printf("%d is not a Harshad Number.\n", num);
    }
}