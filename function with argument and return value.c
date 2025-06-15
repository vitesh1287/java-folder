#include <stdio.h>

int mul(int x, int y); 

int main() {
    int a, b, c;
    printf("Enter value of a & b:\n");
    scanf("%d%d", &a, &b);
    c = mul(a, b);
    printf("mul = %d\n", c);
    return 0; 
}
int mul(int x, int y) { 
    int r = 0;
    for (int i = 0; i < y; i++) {
        r += x;
    }
    return r;
}