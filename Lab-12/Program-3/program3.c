//3. Demonstrate functions fprintf(), fscanf(), fputc(), fgetc(), fseek() and rewind().(A)
#include <stdio.h>
void main(){
	FILE *f;
	
	//fprint()
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

	//fseek()
    f = fopen("Demo.txt","r");
    fseek(f,4,SEEK_SET);
    c=fgetc(f);
    printf("Character: %c\n",c);
    fclose(f);

    //frewind()
    f = fopen("Demo.txt","r");
    rewind(f);
    c = fgetc(f);
    printf("Character: %c\n",c);
    fclose(f);
}
