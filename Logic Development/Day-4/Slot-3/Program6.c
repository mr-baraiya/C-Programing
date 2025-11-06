// 6. Write a program to find the transpose of a matrix.
#include <stdio.h>
void  main(){
    int rows=0,cols=0;
    printf("Enter the no of rows : ");
    scanf("%d",&rows);
    printf("Enter the no of cols : ");
    scanf("%d",&cols);

    int mat[rows][cols];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Enter Element [%d][%d] : ",i,j);
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
    
    int transpose[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transpose[i][j] = mat[j][i];
        }
    }

    printf("\nMatrix : \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix : \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf(" %d ",transpose[i][j]);
        }
        printf("\n");
    }

}