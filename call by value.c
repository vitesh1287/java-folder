#include<stdio.h>
int fun(int,int);
int main()
{
    int a=10,b=5;
    printf("\n before function call a=%d,b=%d", a,b);
    fun(a,b);
    printf("\n after function call a=%d,b=%d", a,b);
}
int fun(int x, int y)
{
    x++;
    x--;
    printf("\n in function a=%d,b=%d", x,y);
}



