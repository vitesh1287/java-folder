#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*file;
    char filename[]="example text";
    long start,end;
    char ch1,ch2;
    file=fopen("filename","r+");
    if(file==NULL){
         perror("Error opening file");
    return 1;
    }
    fseek(file, 0,SEEK_END);
    end=ftell(file);
    start=0;
    end--;

    while(start<end){
        fseek(file,start,SEEK_SET);
        ch1=fgetc(file);
        fseek(file,start,SEEK_SET);
        ch2=fgetc(file);
        fseek(file,start,SEEK_SET);
        fputc(ch2,file);
        fseek(file,start,SEEK_SET);
        fputc(ch1,file);
        start++;
        end--;
    }
        fclose(file);
    
    printf("the content reversed sucessfully\n");
    return 0;



}