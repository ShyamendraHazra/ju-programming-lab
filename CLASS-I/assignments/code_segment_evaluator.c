#include <stdio.h>


void segment_one();
void segment_two();
int main() {
	
	printf("Running first segemnt : \n");
	segment_one();

	printf("\nRunning second segemnt : \n");
	segment_two();

	printf("\n");
	// both show same result

	return 0;
}

void segment_one() {
	int code = 4;
	if (code == 4){ printf("bonus");}
	else {printf("penalty");}
}

void segment_two() {
	int code = 4;
	if (code = 4) {printf("bonus");}
	else {printf("penalty");}
}
