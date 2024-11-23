#include <stdio.h>

int main() {

    int number_digits[3];
    int number; 
    char* digits_in_words[10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    
    printf("Enter a three digit number :: \n\nInput :: ");
    scanf("%d", &number);

    for(int i = 0; i<3;i++) {
        number_digits[(3 - (i + 1))] = number % 10;
        number /= 10;
    }

    printf("Output :: ");

    for (int i = 0; i < 3;i++) {

        printf("%s ", digits_in_words[number_digits[i]]);
    }

    printf("\n");

    return 0;
}