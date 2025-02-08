#include <stdio.h>

void insertAndSort(int arr[], int *n, int element) {
    int i;

    // Find the correct position for the new element
    for (i = *n - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }

    // Insert the element at the correct position
    arr[i + 1] = element;

    // Increase the size of the array
    (*n)++;
}

int main() {
    int n, element;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the array elements
    int arr[n + 1]; // Allocate space for one extra element
    printf("Enter %d sorted elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be inserted
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Insert the element while maintaining the sorted order
    insertAndSort(arr, &n, element);

    // Output the updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}