//3. Merge alternate lines from two ƒiles.(B)
#include <stdio.h>

void main() {
    FILE *file1, *file2, *output;
    int ch;
    int newline_count;

    // Open the files
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    output = fopen("output.txt", "w");

    // Alternate between file1 and file2
    do {
        newline_count = 0;

        // Read one line from file1
        do {
        	ch = getc(file1);
        	if (ch == '\n') {
                newline_count++;
                break;
            }
            putc(ch, output);
        } while(ch != EOF);
		putc('\n', output);
        // Read one line from file2
        do {
        	ch = getc(file2);
        	if (ch == '\n') {
                newline_count++;
                break;
            }
            putc(ch, output);
        } while(ch != EOF);
        putc('\n', output);
    }while(ch != EOF);

    // Close the files
    fclose(file1);
    fclose(file2);
    fclose(output);

    printf("Files merged successfully into output.txt\n");
}
