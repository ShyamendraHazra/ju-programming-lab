#include <stdio.h>

void unionSortedLists(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    while (i < n1) {
        printf("%d ", arr1[i]);
        i++;
    }
    while (j < n2) {
        printf("%d ", arr2[j]);
        j++;
    }
    printf("\n");
}

int main() {
    int n1, n2;
    printf("Enter the size of the first sorted list: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first sorted list:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second sorted list: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second sorted list:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Union of the two sorted lists: ");
    unionSortedLists(arr1, n1, arr2, n2);
    return 0;
}