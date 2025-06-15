#include<stdio.h>
int sum(int x, int y);
int main(){
    int a,b,s;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("sum of %d and %d is %d", a,b,s);
}
int sum(int x,int y){
    return x+y;
    
}