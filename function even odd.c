#include <stdio.h>
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    checkEvenOdd(number);

    return 0;
}

