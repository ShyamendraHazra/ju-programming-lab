#include <stdio.h>

#define ARR_LENGTH 10

void bubble_sort(int* arr);
void array_loader(int* arr);
void print_array(int* arr);

int main() {

    int dataset[ARR_LENGTH];
    array_loader(dataset);
    bubble_sort(dataset);
    print_array(dataset);
    return 0;
}


void array_loader(int* arr) {

    printf("Enter %d elements :: \n", ARR_LENGTH);
    
    for(int i = 0; i < ARR_LENGTH; i++) {
        scanf("%d", &arr[i]);
    }

    return;
}

void bubble_sort(int* arr) {
    for(int i = 0;i < ARR_LENGTH - 1; i++) {
        for(int j = i+1; j < ARR_LENGTH; j++) {
            int temp;
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print_array(int* arr) {
    for (int i = 0; i < ARR_LENGTH; i++) {
        printf("%d ", arr[i]);
    }
}