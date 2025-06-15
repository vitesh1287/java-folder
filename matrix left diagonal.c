#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += matrix[i][n - i - 1];
    }

    printf("Sum of the left diagonal elements: %d\n", sum);

    return 0;
}
