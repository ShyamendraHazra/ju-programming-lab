#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[10][10], transpose[10][10], result[10][10] = {0};

    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);


    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            transpose[j][i] = matrix[i][j];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix[i][k] * transpose[k][j];
            }
        }
    }

 
    printf("The result of multiplying the matrix with its transpose is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}