//4. Allocate dynamic memory for structure variable.(A)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student *s;

    // Allocate memory
    s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Assign values
    strcpy(s->name, "Baby John");
    s->roll = 101;
    s->marks = 85.5;

    // Print structure details
    printf("Student Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);

    // Free memory
    free(s);
    return 0;
}

