#include <stdio.h>

int main() {
    int rows = 10;
    int triangle[10][10] = {0};

    for (int i = 0; i < rows; i++) {
        triangle[i][0] = 1; // First element in each row is 1
        for (int j = 1; j <= i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    
    printf("Pascal's Triangle:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}