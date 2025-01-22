//4. Scan a character string passed as an argument and convert all lowercase string to uppercase string.?(B)
#include <stdio.h>
//#include <string.h>
void converLowerToUpper(char []);
void main(){
	char str[50] = " ";
	printf("Enter the String : ");
	gets(str);
	printf("%s",str);
	converLowerToUpper(str);
}
void converLowerToUpper(char str[]){
	//printf("%s",strupr(str));
	int i = 0 ;
	for(i=0; str[i]!='\0';i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 32;
		}
	}
	printf("%s",str);
}
