#include <stdio.h>
#include <math.h>

int factorial(int n) {

    if(n == 1 || n == 0) {
        return 1;
    }

    return (n * factorial(n-1));

}

double cosine(double x) {
    double result = 0.0;
    int n;
    for (n = 0; n < 10; n++) {
        double term = (pow(-1, n) * pow(x, 2 * n)) / (double)factorial(2 * n);
        result += term;
    }
    return result;
}

int main() {
    double x;
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("cos(%lf) = %.5f\n", x, cosine(x));
    return 0;
}