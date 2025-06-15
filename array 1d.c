#include<stdio.h>
int main(){
int i;
int sum;
int arr[] = {1,2,3,4,5};
for(i=0;i<5;i++)
printf("%d ",arr[i]);
sum=sum+arr[i];
printf("\n%dsum",sum);
}