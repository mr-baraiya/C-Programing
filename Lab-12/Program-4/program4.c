//4. Print contents of ƒile in reverse order.(B)
#include<stdio.h>
void main(){
    FILE *f;
    int length=0,i=0;
    
    f = fopen("Demo.txt","r+");
    if(f == NULL){
    	printf("File Can not be Open.");
		return;
	}
	
    fseek(f,0,SEEK_END);
    length = ftell(f);
    for (i=length-1;i>=0;i--)
    {
        fseek(f,i,SEEK_SET);
        char c = fgetc(f);
        printf("%c",c);
    }
    fclose(f);
}

