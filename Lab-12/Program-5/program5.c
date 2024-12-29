//5. Capitalize ƒirst letter of each word in ƒile.
#include <stdio.h>
#include <string.h>

void main() {
    FILE *f1 = fopen("Demo.txt", "r");
    FILE *f2 = fopen("Capatilize.txt", "w");

    if (f1 == NULL || f2 == NULL) {
        perror("File Can not be Open.");
        return;
    }

    int c;
    int flag = 1;

    while ((c = fgetc(f1)) != EOF) {
        if (c == ' ') {
            flag = 1;
            fputc(c, f2);
        } else {
            if (flag) {
                fputc(toupper(c), f2);
                flag = 0;
            } else {
                fputc(c, f2);
            }
        }
    }

    fclose(f1);
    fclose(f2);

    printf("Capitalization completed.");
}

