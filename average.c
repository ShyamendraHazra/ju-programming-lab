#include <stdio.h>

int main() {

	int num_one;
	int num_two;
	int num_three;

	printf("Enter three numbers :: ");
	scanf("%d %d %d", &num_one,&num_two, &num_three);

	printf("The average is %d\n", (num_one+num_two+num_three)/3);
	return 0;
}
