#include <stdio.h>
#include <math.h>

int main() {
    int rows, cols;
    double norm = 0.0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    double matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%lf", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            norm += matrix[i][j] * matrix[i][j]; 
        }
    }
    norm = sqrt(norm); 


    printf("The Frobenius norm of the matrix is: %.2f\n", norm);

    return 0;
}