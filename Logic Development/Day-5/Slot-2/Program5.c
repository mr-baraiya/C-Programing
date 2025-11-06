// 5. Write a program to find the sum of diagonal elements of a 2D matrix.
#include <stdio.h>
void  main(){
    int rows=0,cols=0;
    printf("Enter the no of rows : ");
    scanf("%d",&rows);
    printf("Enter the no of cols : ");
    scanf("%d",&cols);
    int mat[rows][cols];
    int sum=0;
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Enter Element [%d][%d] : ",i,j);
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<rows;i++){
        sum += mat[i][i];
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }

    printf("Sum Of Diagonal Elemants : %d",sum);
}