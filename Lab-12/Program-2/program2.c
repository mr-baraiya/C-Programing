//2. Count chars, spaces, tabs and new lines in a ƒile (A)
#include <stdio.h>
void main(){
	FILE *f;
	f = fopen("Demo.txt","r");
	if(f == NULL){
		printf("File Can not be Open.");
		return;
	}
	char c;
	int count_char=0,count_space=0,count_tabs=0,count_line=1;
	do{
		c = fgetc(f);
		count_char++;
		if(c == ' '){
			count_space++;
		}
		if(c == '\t'){
			count_tabs++;
		}
		if(c == '\n'){
			count_line++;
		}
	}while(c != EOF);
	printf("Character count: %d\n",count_char);
    printf("Space count: %d\n",count_space);
    printf("Tabs count: %d\n",count_tabs);
    printf("Line count: %d\n",count_line);
	fclose(f);
}
