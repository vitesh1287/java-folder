#include <stdio.h>
long fact(int x) {
    if (x == 0)
        return 1;
    else
        return (x * fact(x - 1));
}

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %ld\n", num, fact(num));
    return 0;
}
