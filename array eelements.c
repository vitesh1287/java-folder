#include <stdio.h>
int main() {
    int arr[10];  
    int i;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("\nThe 10 elements in the array are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
