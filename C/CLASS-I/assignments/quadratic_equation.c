#include <stdio.h>
#include <math.h>

int main() {

	int a,b,c;
	printf("Enter all co-efficients :: ");
	scanf("%d %d %d",&a,&b,&c);
	int determinant = (b*b) - 4*a*c;
	if(determinant > 0) {
		printf("The roots are %lf and %lf", (double)((-b+sqrt(determinant))/(2*a)), (double)((-b-sqrt(determinant))/(2*a)));
	} else if (determinant == 0) {
		printf("The only root is %lf", (double)(-b/(2*a)));
	}
	else {
		printf("There are no real roots.\n");
	}
	return 0;
}
