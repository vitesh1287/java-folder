#include<stdio.h>
int main(){
FILE  *fptr;
int ch;
if((fptr=fopen("my file .txt","w"))==NULL){
    printf("file does not exit\n");
     exit(0);
}
else
{
    printf("\n enter text \n");
    while((ch=getchar())!=EOF)
    fputc(ch,fptr);
}
fclose(fptr);
}

