//3. Merge alternate lines from two ƒiles.(B)
#include <stdio.h>

void main() {
    FILE *file1, *file2, *output;

    // Open the files
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    output = fopen("output.txt", "w");
	
	if (file1 == NULL || file2 == NULL || output == NULL) {
        perror("File Can not be Open.");
        return;
    }
	
	char line[1000];
    while (1) {
    	
		//  fgets(str, MaxCount, File_Pointer);
		//  fputs(str, File_Pointer);
		
        if (fgets(line, sizeof(line), file1) != NULL) {
            fputs(line, output);
        }

        if (fgets(line, sizeof(line), file2) != NULL) {
            fputs(line, output);
        }

        if (feof(file1) && feof(file2)) {
            break;
        }
    }
    
    // Close the files
    fclose(file1);
    fclose(file2);
    fclose(output);

    printf("Files merged successfully into output.txt\n");
}
