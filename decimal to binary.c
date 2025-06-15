#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int n) {
    // Create an array to hold the binary digits (assuming a maximum of 32 bits)
    int binary[32];
    int i = 0;

    // If the number is 0, we just print 0
    if (n == 0) {
        printf("0");
        return;
    }

    // Convert decimal to binary (store remainders in the binary array)
    while (n > 0) {
        binary[i] = n % 2;  // Store the remainder (0 or 1)
        n = n / 2;          // Divide the number by 2
        i++;                // Move to the next index in the array
    }

    // Print the binary digits in reverse order (because we collected them in reverse)
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int decimal;

    // Input the decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Output the binary equivalent
    printf("Binary representation: ");
    decimalToBinary(decimal);

    printf("\n");  // Print a newline for better formatting
    return 0;
}
