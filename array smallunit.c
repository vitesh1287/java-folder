#include<stdio.h>
int main(){
    int i, small, a[3];
    
    printf("Enter elements:\n");
    for(i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    
    small = a[0];
    for(i = 0; i < 3; i++) {
        if(a[i] < small) {
            small = a[i];
        }
    }
    
    printf("The small element is: %d\n", small);
    return 0;
}

