//8.	Print numbers divisible by 2 between two numbers
#include <stdio.h>
void main(){
    int start, end;
    printf("Enter two numbers (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Numbers divisible by 2 between %d and %d are:\n", start, end);
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            printf(" %d ", i);
        }
    }
}