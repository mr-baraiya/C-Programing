//2. Get current time using __TIME__(A)
#include <stdio.h>
void main(){
	printf("Current Time : %s \n",__TIME__);
	printf("Current Date : %s \n",__DATE__);
	printf("Code Line : %d \n",__LINE__);
	printf("File Name : %s \n",__FILE__);
}
