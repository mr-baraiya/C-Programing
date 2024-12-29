//1. Create, open and close a ƒle. (A)
#include <stdio.h>

void main(){
	FILE *f;
	// Create File And Open File
	f = fopen("Demo.txt","w");
	if(f == NULL){
		printf("File Can not be Open.");
		return;
	}
	printf("'Demo.txt' is Successfully Created.\n");
	
	char s[100] ="I am a Student At Darshan University - Rajkot.";
	fprintf(f,"%s",s);
	printf("Successfully Write in 'Demo.txt' .");
	// close The file
	fclose(f);
}
