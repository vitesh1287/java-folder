#include<stdio.h>
int main(){
    int a[3][3]={2,4,6,8,5,6,7,8,6};
    int b[3][3]={9,8,7,6,5,4,3,2,1};
    int c[3][3],i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=0;
            for(k=0;k<3;k++){
                c[i][j]=c[i][j]+a[i][j]*b[k][j];            }
        }
    }
    
    }
    