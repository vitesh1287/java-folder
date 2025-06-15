#include <stdio.h>

// Function to check if all elements are distinct
int distinct(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return 0;  // Return 0 if any two elements are the same
            }
        }
    }
    return 1;  // Return 1 if all elements are distinct
}

int main() {
    int n;

    // Input number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if all elements are distinct
    if (distinct(arr, n)) {
        printf("All elements in the array are distinct.\n");
    } else {
        printf("The array contains duplicate elements.\n");
    }

    return 0;
}
