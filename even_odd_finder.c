#include<stdio.h>

int main() {
	int num;
	printf("Enter a number :: ");
	scanf("%d", &num);

	if(!(num % 2 == 0)) {
		printf("Given number (%d) is odd.\n", num);
	}
	else {
		printf("Given number (%d) is even.\n", num);
	}
	return 0;
}
