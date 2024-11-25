#include <stdio.h>

int var_one = 28;
int var_two = 82;


void use_third_var();
void swap_direct();

int main() {
	
	int choice;
	printf("\
		A.) Enter 1 to use third variable\n\
		B.) Enter 0 to swap directly\n\
		Enter your choice :: \
	");

	scanf("%d", &choice);

	switch(choice) {
		case 0:
			swap_direct();
			break;
		case 1:
			use_third_var();
			break;
		default:
			printf("Invalid choice. Rerun program!\n");
	}

	return 0;

}

void use_third_var() {

	printf("\
		Using Third variable\n\
		var_one :: %d\n\
		var_two :: %d\n\
	",var_one, var_two);


	int swapper = var_one;
	var_one  = var_two;
	var_two = swapper;

	printf("\tAfter Swap ::\n\t\tvar_one :: %d\n\t\tvar_two :: %d\n", var_one,var_two);
}

void swap_direct() {

	printf("\
		Without using third variable\n\
		var_one :: %d\n\
		var_two :: %d\n\
	", var_one, var_two);

	var_one += var_two;
	var_two = var_one - var_two;
	var_one = var_one - var_two;

	printf("\tAfter Swap ::\n\t\tvar_one :: %d\n\t\tvar_two :: %d\n", var_one,var_two);

}
