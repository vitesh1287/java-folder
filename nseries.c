#include<stdio.h>
int main()
{
int num,count=1;
printf("enter a integer number greter than 1\n");
scanf("%d",&num);
while(count<=num){
printf("%d+",(count*count));
count++;
}
return 0;
}
