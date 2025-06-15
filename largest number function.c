#include <stdio.h>
int findLargest(int num1, int num2, int num3) {
    int largest = num1; 

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    return largest;
}

int main() {
    int number1, number2, number3;
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);
    printf("Enter third number: ");
    scanf("%d", &number3);

    int largest = findLargest(number1, number2, number3);

    printf("The largest number is: %d\n", largest);

    return 0;
}
