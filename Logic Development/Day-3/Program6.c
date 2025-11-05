#include<stdio.h>

    int main(){

        int n ;
        printf("Enter number : ");
        scanf("%d",&n);
        
       for (int i = 1; i <= n; i++)
       {
           for (int j = 1; j <=i; j++)
            {
                if((i+j)%2==0){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            for (int j = 1; j <=2*(n-i)-1; j++)
            {
                printf("  ");
            }
            if(i!=n){
                for (int j = 1; j <=i; j++)
                {
                    if((i+j)%2==0){
                        printf("* ");
                    }
                    else{
                        printf("  ");
                    }
                }
            }else{
                for (int j = 1; j <=i-1; j++)
                {
                    if((i+j)%2==0){
                        printf("* ");
                    }
                    else{
                        printf("  ");
                    }
                }
            }
            
          printf("\n"); 
       }
       for (int i = n-1; i > 0; i--)
       {
           for (int j = 1; j <=i; j++)
            {
                if((i+j)%2==0){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            for (int j = 1; j <=2*(n-i)-1; j++)
            {
                printf("  ");
            }
            if(i!=n){
                for (int j = 1; j <=i; j++)
                {
                    if((i+j)%2==0){
                        printf("* ");
                    }
                    else{
                        printf("  ");
                    }
                }
            }else{
                for (int j = 1; j <=i-1; j++)
                {
                    if((i+j)%2==0){
                        printf("* ");
                    }
                    else{
                        printf("  ");
                    }
                }
            }
            
          printf("\n"); 
       }
       
        
    return 0;
}