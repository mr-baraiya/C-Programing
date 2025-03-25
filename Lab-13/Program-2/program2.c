//2. Copy one ƒile to another ƒile.(A)
#include <stdio.h>
void main(){
	FILE *fp1,*fp2;
	char ch;
	fp1 = fopen("Demo.txt","r");
	fp2 = fopen("DemoCopy.txt","w");
	
	if (fp1 == NULL || fp2 == NULL) {
        perror("File Can not be Open.");
        return;
    }
    
	do{
		ch = fgetc(fp1);
		if (ch == EOF){
        	break;	
		}
        else {
        	fputc(ch,fp2);
		}
	}while(ch != EOF);
	
	fclose(fp1);
	fclose(fp2);
	printf("File copied successfully...");
}
