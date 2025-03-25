//1. Append one ƒile at the end of other. (A)
#include <stdio.h>
void main(){
	FILE *fp1,*fp2;
	char ch;
	//Open the Both File 
	fp1 = fopen("Demo.txt","r");
	fp2 = fopen("Temp.txt","a");
	if (fp1 == NULL || fp2 == NULL) {
        printf("File Can not be Open.");
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
	//Close The Both File
	fclose(fp1);
	fclose(fp2);
	printf("File Apended Successfully.");
}
