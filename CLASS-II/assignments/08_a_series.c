#include <stdio.h>

#define LENGTH 10

int factorial(int n) {

    if(n == 1) {
        return 1;
    }

    return (n * factorial(n-1));

}

int main() {
    double sum = 0;
    for (int i = 1; i <= LENGTH; i++) {

        sum += ((double)i/(double)factorial(i));

    }


    printf("THe series output :: %lf\n", sum);
}