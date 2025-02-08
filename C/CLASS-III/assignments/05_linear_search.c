#include <stdio.h>

#define ARR_LENGTH 10

void linear_search(int* arr, int key);
void array_loader(int* arr);
void print_array(int* arr);

int main() {

    int dataset[ARR_LENGTH];
    int key; 

    array_loader(dataset);
    printf("Enter a value to search \n");
    scanf("%d",&key);
    linear_search(dataset,key);
    return 0;
}


void array_loader(int* arr) {

    printf("Enter %d elements :: \n", ARR_LENGTH);
    
    for(int i = 0; i < ARR_LENGTH; i++) {
        scanf("%d", &arr[i]);
    }

    return;
}

void linear_search(int* arr, int key) {
    int i = 0;
    for(;i < ARR_LENGTH; i++) {
        if(key == arr[i]) {
            printf("%d\n", arr[i]);
            break;
        }    
    }

    if( i < ARR_LENGTH) {
        printf("element %d found at %d\n", key, i+1);
    } else {
        printf("element %d Not found\n", key);
    }
}
