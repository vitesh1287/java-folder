#include<stdio.h>
int main(){

    int arr1[3][3], brr1[3][3], crr1[3][3], i, j, n;

    printf("\n\nAddition of two Matrices :\n");
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &n);

    printf("Input elements in the first matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Input elements in the second matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &brr1[i][j]);
        }
    }

    printf("\nThe First matrix is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", arr1[i][j]);
    }


    printf("\nThe Second matrix is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", brr1[i][j]);
    }

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            crr1[i][j] = arr1[i][j] + brr1[i][j];

printf ("\nThe Addition of two matrix is : \n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", crr1[i][j]);
    }
    printf("\n\n");
}


