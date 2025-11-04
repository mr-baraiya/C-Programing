//1. Find the sum of 1+(1+2)+(1+2+3)+... (1+2+3+...+n)
#include <stdio.h>

int sumOfNNumbers(int);

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int totalSum=0;
    for(int i=1;i<=n;i++){
        totalSum += sumOfNNumbers(i);
    }
    printf("The total sum is: %d\n",totalSum);
}

int sumOfNNumbers(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum += i;
    }
    return sum;
}