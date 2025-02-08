#include <stdio.h>


void sortArray(int arr[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns for the 2-D arrays: ");
    scanf("%d%d", &rows, &cols);

    int arr1[10][10], arr2[10][10], sum[10][10];

    
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr1[i][j]);

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr2[i][j]);

    
    sortArray(arr1, rows, cols);
    sortArray(arr2, rows, cols);

    
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];

    
    sortArray(sum, rows, cols);


    printf("The sorted sum array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}