#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  
        a = temp;   
    }
    return a;
}

int main() {


    int num_one = 0;
    int num_two = 0;

    printf("Enter a number :: \n");
    scanf("%d", &num_one);
    
    printf("Enter another number :: \n");
    scanf("%d", &num_two);

    printf("The GCD of %d and %d are %d", num_one,num_two, gcd(num_one,num_two));

    return 0;

}