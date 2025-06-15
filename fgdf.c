#include<stdio.h>
int main(){
    int num,sum=0,digit;
    printf("enter a integer number");
    scanf("%d",&num);
    if(num<0){
    num=-num;
}
while(num>0){
digit=num%10;
sum+=digit;
num/=10;
}
printf("sum of digit %d\n",sum);
return 0;
}

