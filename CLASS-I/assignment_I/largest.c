#include <stdio.h>

int  main() {
	
	int num_one;
	int num_two;
	int num_three;
	int largest;
	
	
	printf("Enter three numbers :: \n");
	scanf("%d %d %d",&num_one,&num_two,&num_three);

	largest = num_one;
	if(largest < num_two) {
		
		largest = num_two;	
	}
	
	if (largest < num_three) {
		largest = num_three;
	}
	printf("The largest number is :: %d\n", largest);
	return 0;
}
