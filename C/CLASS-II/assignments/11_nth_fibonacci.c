#include <stdio.h>
#include <math.h>


double fibonacciFormula(int n) {
    double sqrt5 = sqrt(5);
    double phi = (1 + sqrt5) / 2;
    double psi = (1 - sqrt5) / 2;
    return (pow(phi, n) - pow(psi, n)) / sqrt5;
}


int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double fibFormula = fibonacciFormula(n);

    printf("Fibonacci number using formula: %.0f\n", fibFormula);
    
    return 0;
}