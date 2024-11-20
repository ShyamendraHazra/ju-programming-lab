#include <stdio.h>

int main() {
	
	int a = 5;
	int b = 6;
	
	int z = a++ + b++;
	printf("i. z = %d\n", z);

	z = a++ + --b;
	printf("ii. z = %d\n", z);

	z = a++ + ++a;
	printf("iii. z = %d\n", z);

	return 0;
}
