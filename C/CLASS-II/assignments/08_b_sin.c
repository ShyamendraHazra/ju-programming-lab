#include <stdio.h>
#include <math.h>

int factorial(int n) {

    if(n == 1) {
        return 1;
    }

    return (n * factorial(n-1));

}


double sine(double x) {
    double result = 0.0;
    int n, i;
    for (n = 0; n < 10; n++) {
        double term = pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1);
        result += term;
    }
    return result;
}


int main() {
    double x;
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("sin(%lf) = %.5lf\n", x, sine(x));
    return 0;
}

