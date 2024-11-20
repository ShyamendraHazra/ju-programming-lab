#include <stdio.h>

int main() {
    int number;
    int count = 2;
    int dig[3];

    printf("Enter a three digit numer :: ");
    scanf("%d", &number);

    while(count) {
	dig[count] = number % 10;
	number /= 10;
	--count;
    }
    
    dig[count] = number % 10;
    if(dig[2]+dig[0] == 2*dig[1]) {
	printf("match\n");
    } else {
	printf("no-match\n");
    }

    return 0;
}
