// 1 
// 1 * 3 * 1 
// 1 * 3 * 5 * 3 * 1
// 1 * 3 * 5 * 7 * 5 * 3 * 1
// #include <stdio.h>
// void main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         int val = 1;
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             printf("%d", val);
//             if (j < i) {
//                 val += 2;
//             } else {
//                 val -= 2;
//             }
//             if (j < (2 * i - 1)) {
//                 printf(" * ");
//             }
//         }
//         printf("\n");
//     }
// } 

// 1 
// 1 * 1 
// 1 * 3 * 1 
// 1 * 3 * 5 * 3 * 1
#include <stdio.h>
void main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1;j<=(2*i-1);j++){
            if (j%2==0) printf("* ");
            else if(j<i) printf("%d ",j);
            else printf("%d ",2*i-j);
        }
        printf("\n");
    }
}