//3. Demonstrate functions fprintf(), fscanf(), fputc(), fgetc(), fseek() and rewind().(A)
#include <stdio.h>
void main(){
	FILE *f;
	
	//fprintf()
    f = fopen("Demo1.txt","w");
    fprintf(f,"%s","Hello World!");
    fclose(f);
    
	//fscanf()
	char s[100];
    f = fopen("Demo1.txt","r");
    fscanf(f,"%s",s);
    printf("String: %s\n",s);
    fclose(f);
    
	//fputc()
    f = fopen("Demo2.txt","w");
    fputc('x',f);
    fclose(f);
    
	//fgetc()
    f = fopen("Demo2.txt","r");
    char c = fgetc(f);
    printf("Character: %c\n",c);
    fclose(f);

//	fseek()
//	#define SEEK_CUR 1
//	#define SEEK_END 2
//	#define SEEK_SET 0

    f = fopen("Demo.txt","r");
    fseek(f,4,SEEK_SET);
    c=fgetc(f);
    printf("Character: %c\n",c);

    //rewind() = fseek(fp, 0, SEEK_SET);
    rewind(f);
    c = fgetc(f);
    printf("Character: %c\n",c);
    fclose(f);
}
