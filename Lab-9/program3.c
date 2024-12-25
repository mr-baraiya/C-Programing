//3. Find length of string using Pointers.(A)
#include <stdio.h>
void main(){
	char str[50];
	printf("Enter the string : ");
	gets(str);
	char *p = str;
	printf("length of \'%s\' ",str);
	//find the length
	int length = 0;
	while (*p != '\0'){
		length++;
		p++;
	}
	printf("is = %d",length);
}
