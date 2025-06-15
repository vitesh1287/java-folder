#include<stdio.h>
int fun(int* , int*);
int main()
{
    int a = 10, b = 5;
    printf("\n before function call a=%d,b=%d", a, b);
    fun(&a, &b);  // Corrected: Pass addresses of a and b
    printf("\n after function call a=%d,b=%d", a, b);  // Print updated values
}

int fun(int *x, int *y)
{
    (*x)++;  // Increment value of a
    (*y)++;  // Increment value of b
    printf("\n in function a=%d,b=%d", *x, *y);  // Print values
}
