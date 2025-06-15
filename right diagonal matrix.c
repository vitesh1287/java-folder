#include <stdio.h>
#include<conio.h>
int main(){
    int matrix[MAX][MAX];
    int n, sum = 0;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        sum += matrix[i][n - 1 - i]; 
    }
    printf("Sum of the right diagonal: %d\n", sum);

    return 0;
}
