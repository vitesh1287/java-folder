#include<stdio.h>

long number(int a,int b){
if(b==0)
return a;
else
return number(a+1,b-1);   
}
int main(){
    int num1,num2;
    printf("first numbers");
    scanf("%d",&num1);
    printf("second number");
    scanf("%d",&num2);
    int result = number (num1,num2);
    printf("sum of %d and %d is %d\n",num1,num2,result);
    return 0;
}