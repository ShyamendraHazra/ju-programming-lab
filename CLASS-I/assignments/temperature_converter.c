#include <stdio.h>
#include <stdlib.h>

float formula(char scale, int temp);

int main() {
    
    int temp;
    char scale;

    printf("Enter scale of the temperature [c/f]:: ");
    scanf("%c", &scale);

    printf("Enter the temperature :: ");
    scanf("%d", &temp);

    float conv_temp = formula(scale, temp);

    printf("The temperature after conversion is %.2f.\n", conv_temp);

    return 0;
}

float formula(char scale, int temp) {
    int con_temp;

    if (scale != 'c' && scale != 'f') {
        
        printf("The given scale is invalid!! Give either Centigrade or Fahrenheit!\n");
        exit(EXIT_FAILURE);
    }

    if(scale == 'c') {
        con_temp = ((temp * (9.0/5.0)) + 32);
    } else {
        con_temp = ((temp - 32) * (5.0/9.0));
    }

    return con_temp;
}