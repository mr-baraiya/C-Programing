//4. Allocate dynamic memory for structure variable.(A)
#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[50];
	int id;
};

void main(){
	struct student *s;
	// Allocate Memory
	s = (struct student *) malloc(sizeof(struct student));
	if(s == NULL){
		printf("Memory Allocation is Failed.\n");
		return;
	}
	printf("Enter the Name of Student : ");
	gets(s->name);
	printf("Enter the ID of Student : ");
	scanf("%d",&s->id);
	
	printf("%d. %s",s->id,s->name);
	// Free Memory
	free(s);
}
