#include<stdio.h>
void main(){
    int arr[100],n,i,j,temp;
    printf("enter the elements of the array");
    scanf("%d",&n);
    printf("enter %d elements \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("array in ascending order\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

