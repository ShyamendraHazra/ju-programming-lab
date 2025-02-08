#include <stdio.h>

void swapOddEven(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        // Swap the elements at odd and even positions
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int n;

    // Input the array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Validate the size
    if (n < 2) {
        printf("Array must have at least 2 elements to perform swapping.\n");
        return 0;
    }

    int arr[n];

    // Input the array elements
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform the swapping
    swapOddEven(arr, n);

    // Output the modified array
    printf("Array after swapping odd and even positioned elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}