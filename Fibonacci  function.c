#include<stdio.h>
int fiboncci(int n){
    if(n<=1){
        return n;
    }
    return fiboncci(n-1)+fiboncci(n-2);
}
int main(){
    int i,n;
    printf("enter the numbers of fiboncci series");
    scanf("%d",&n);
    printf("fiboncci series");
    for(i=0;i<n;i++){
    printf("%d",fiboncci(i));
}
printf("\n");
}