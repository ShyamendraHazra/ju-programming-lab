#include <stdio.h>
#include <math.h>

void calculateMean(int arr[], int n, double *mean) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    *mean = (double)sum / n;
}

void calculateMode(int arr[], int n, int *mode) {
    int maxCount = 0;
    *mode = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            *mode = arr[i];
        }
    }
}

void calculateStandardDeviation(int arr[], int n, double mean, double *stdDev) {
    double sumSqDiff = 0;
    for (int i = 0; i < n; i++) {
        sumSqDiff += pow(arr[i] - mean, 2);
    }
    *stdDev = sqrt(sumSqDiff / n);
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    double mean, stdDev;
    int mode;

    calculateMean(arr, n, &mean);
    calculateMode(arr, n, &mode);
    calculateStandardDeviation(arr, n, mean, &stdDev);

    printf("\nResults:\n");
    printf("Mean: %.2lf\n", mean);
    printf("Mode: %d\n", mode);
    printf("Standard Deviation: %.2lf\n", stdDev);

    return 0;
}