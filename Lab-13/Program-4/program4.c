//4. Delete all blank lines in a file then insert a blank line after the third line in a file.(C)
#include <stdio.h>
#include <string.h>

void main() {
    FILE *file, *temp;
    char line[1000];
    int line_count = 0;

    // Open files
    file = fopen("demo.txt", "r");
    temp = fopen("temp.txt", "w");

    if (file == NULL || temp == NULL) {
        printf("Error opening files");
        return;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
 
    	if (strlen(line) > 1){
    		fputs(line, temp);
    		line_count++;
		}
            
        if (line_count == 3) {
            fputc('\n', temp);
        }
    }

    // Close files
    fclose(file);
    fclose(temp);

    printf("File processed successfully.\n");
}

