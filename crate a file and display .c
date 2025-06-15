#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;       // File pointer
    char filename[] = "example.txt"; // File name
    char data[] = "Hello, this is a sample file.\nWelcome to file handling in C!";
    char ch;

    // Step 1: Create a file and write data to it
    file = fopen(filename, "w"); // Open file in write mode
    if (file == NULL) {
        perror("Error creating file");
        return 1;
    }

    fprintf(file, "%s", data);  // Write data to the file
    fclose(file);              // Close the file after writing
    printf("Data written to file successfully.\n");

    // Step 2: Reopen the file in read mode and display its contents
    file = fopen(filename, "r"); // Open file in read mode
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("Contents of the file '%s':\n", filename);

    // Read and display the file character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file); // Close the file after reading
    return 0;
}
