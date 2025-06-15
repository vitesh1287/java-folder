#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";
    long start, end; 
    char ch1, ch2;

    // Step 1: Open the file in read and write mode
    file = fopen(filename, "r+"); // Open for both reading and writing
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Step 2: Find the file size using fseek() and ftell()
    fseek(file, 0, SEEK_END); // Move to the end of the file
    end = ftell(file);        // Get the position of the file pointer (file size)
    start = 0;                // Start position is 0

    end--; // Adjust to ignore the EOF character

    // Step 3: Reverse the contents of the file
    while (start < end) {
        // Move file pointer to the start position and read a character
        fseek(file, start, SEEK_SET);
        ch1 = fgetc(file);

        // Move file pointer to the end position and read a character
        fseek(file, end, SEEK_SET);
        ch2 = fgetc(file);

        // Swap the two characters
        fseek(file, start, SEEK_SET);
        fputc(ch2, file); // Write character from 'end' to 'start'

        fseek(file, end, SEEK_SET);
        fputc(ch1, file); // Write character from 'start' to 'end'

        // Move the pointers
        start++;
        end--;
    }

    // Step 4: Close the file
    fclose(file);

    printf("File contents reversed successfully.\n");

    return 0;
}
