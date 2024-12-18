//1. Append one ƒile at the end of other. (A)
#include <stdio.h>
void main(){
	FILE *fp1,*fp2;
	char ch;
	fp1 = fopen("Demo.txt","r");
	fp2 = fopen("Temp.txt","a");
	do{
		ch = getc(fp1);
		putc(ch,fp2);
	}while(ch != EOF);
	fclose(fp1);
	fclose(fp2);
	printf("File Apended Successfully.");
}
