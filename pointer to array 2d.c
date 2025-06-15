#include <stdio.h>

int main() {
    int arr[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33}
    };
    
    int i, j;
    
    // Print addresses and values of the first dimension of the array
    for (i = 0; i < 3; i++) {
        printf("Address of arr[%d]: %p\n", i, arr[i]);
        for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
