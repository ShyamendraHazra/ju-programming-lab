#include <stdio.h>

int main() {

    int base;
    int exp;
    int result = 1;
    printf("Enter a number as base :: ");
    scanf("%d",&base);

    printf("Enter it's exponent :: ");
    scanf("%d",&exp);

    while(exp > 0) {
        result *= base;
        printf("%d => %d\n", exp, result);
        exp--;
    }

    printf("The answer is :: %d\n",result);
    return 0;
}