#include<stdio.h>
int largest(int a,int b,int c){
    if(a>=b && a>=c){
    return a;
} else if(b>=a && b>=c){
    return b;
}else{
    return c;
}
}
int main(){
    int num1, num2,num3,largest_num;
    printf("enter the first second third number");
    scanf("%d%d%d",&num1, &num2, &num3);
    largest_num = largest(num1,num2,num3);
    printf("the largest number is %d",largest_num);
    return 0;
}