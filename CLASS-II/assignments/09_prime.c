#include <stdio.h>

#define println() printf("\n")

int main() {
    int n;
    printf("Enter a number to search upto :: ");
    scanf("%d", &n);

    for(int j = 1; j <= n; j++) {
        int flag = 0;
        for(int i = 2; i <= j/2; i++) {

            if (j%i == 0) {
                flag = 1;
            }

        }
        if(flag == 0) {
            printf("%d ", j);
        }

    } 
    println();
    return 0;
}