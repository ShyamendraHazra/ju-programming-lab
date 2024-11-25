#include <stdio.h>

int main() {

	float simple_interest;
	int principal_amount;
	int rate_of_interest;
	int num_of_years;

	printf("Enter your principal amount, rate of interest, and number of years :: ");
	scanf("%d %d %d", &principal_amount,&rate_of_interest,&num_of_years);
	simple_interest = (principal_amount*rate_of_interest*num_of_years) / 100;
	printf("Your simple interest is %.2f.\n", simple_interest);
	return 0;
}
