#include <stdio.h>
void decimalToBinary(int n) {
    if (n > 1) {
    
        decimalToBinary(n / 2);
    }

    printf("%d", n % 2);
}

int main() {
    int decimal;

    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    
    if (decimal == 0) {
        printf("Binary representation: 0");
    } else {
        printf("Binary representation: ");
        
        decimalToBinary(decimal);
    }

    printf("\n"); 
    return 0;
}
