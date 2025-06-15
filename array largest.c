#include<stdio.h>
int main(){
{
    int i,largest,a[3];
    printf("enter elements :\n");
    for(i=0;i<3;i++){
    scanf("%d",&a[i]);
}
largest =a[0];
for(i=0;i<3;i++){
    if(a[i]>largest){
        largest=a[i];
    }
}
printf("the largest elements is:%d\n", largest);

return 0;
}
}
