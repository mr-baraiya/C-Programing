//4. Delete all blank lines in a ƒile then insert a blank line after the third line in a ƒile.(C)
#include <stdio.h>
void main() {
    FILE *input, *temp;
    int ch;
    int line_count = 0, is_blank = 0; 
    input = fopen("input.txt", "r");
    temp = fopen("temp.txt", "w");

    if (input == NULL || temp == NULL) {
        printf("Error opening files.\n");
        if (input) fclose(input);
        if (temp) fclose(temp);
        return;
    }

    do {
        is_blank = 1; // Assume the line is blank initially

        // Read and process characters for the current line
        do {
            ch = getc(input);
            if (ch == EOF) {
                break; // End of file, exit loop
            }

            if (ch != '\n' && ch != ' ' && ch != '\t') {
                is_blank = 0; // Found a non-whitespace character
            }

            if (!is_blank) {
                putc(ch, temp); // Write non-blank content to temp
            }
        } while (ch != '\n' && ch != EOF);

        // Write the newline if the line was not blank
        if (!is_blank && ch == '\n') {
            putc('\n', temp);
            line_count++;
        }

        // Insert a blank line after the third line
        if (line_count == 3) {
            putc('\n', temp);
            line_count++; // Increment to prevent adding multiple blank lines
        }
    } while (ch != EOF);

    // Close the files
    fclose(input);
    fclose(temp);

    printf("File processed successfully.\n");
}

