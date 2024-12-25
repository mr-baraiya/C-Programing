//4. Copy one string into another string using Pointers.(A)
#include <stdio.h>
#include <string.h>
void main(){
	char str[50];
	printf("Enter the string : ");
	gets(str);
	
	//Copy the str
	char copy[strlen(str)];
	char *p1 = str;
	char *p2 = copy;
	int i = 0;
	while (*p1 != '\0'){
		*p2 = *p1;
		p1++;
		p2++;
	}
	printf("%s",copy);
}
