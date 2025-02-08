#include <stdio.h>
#include <math.h>

#define ARR_LENGTH 10


void array_loader(int* arr);
void print_array(int* arr);
void find_min_max(int* arr, int* min, int* max);

int main() {

    int dataset[ARR_LENGTH];
    int min = (int)INFINITY;
    int max = 0;

    array_loader(dataset);
    find_min_max(dataset, &min, &max);
    printf("Max is %d | Min is %d\n", max, min);
    return 0;
}


void array_loader(int* arr) {

    printf("Enter %d elements :: \n", ARR_LENGTH);
    
    for(int i = 0; i < ARR_LENGTH; i++) {
        scanf("%d", &arr[i]);
    }

    return;
}


void print_array(int* arr) {
    for (int i = 0; i < ARR_LENGTH; i++) {
        printf("%d ", arr[i]);
    }
}

void find_min_max(int* arr, int* min, int* max) {
    for(int i = 0; i<ARR_LENGTH; i++) {
        if(arr[i] < *min) {
            *min = arr[i];
        }

        if(arr[i] > *max) {
            *max = arr[i];
        }
    }   
}