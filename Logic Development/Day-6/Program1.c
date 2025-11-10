// WAP to find weather given number is Prime or not. 
#include <stdio.h>
void main(){
    int n=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int flag = 0;
     if (n <= 1) {
        flag = 1;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
    }
    if(!flag){
        printf("Given number %d is a Prime Number.",n);
    }
    else{
        printf("Given number %d is Not a Prime Number.",n);
    }
}