#include<stdio.h>
int main(){
int a,b,arm=0,n,r;
printf("enter your number");
scanf("%d",&n);
b=n;
while(n>0)
{
    r=n%10;
    arm=r*r*r+arm;
    n=n/10;
}
if(b==arm){
    printf("arm");
}
else
printf("not");
}