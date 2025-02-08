#include <stdio.h>

int main() {
	int sub_one;
	int sub_two;
	int sub_three;
	int sub_four;
	int sub_five;
	int average;

	printf("Enter marks for \"Language Fundamendtals\" :: ");
	scanf("%d", &sub_one);
	printf("Enter marks for \"Digital System\" :: ");
	scanf("%d", &sub_two);
	printf("Enter marks for \"Management Information System\" :: ");
	scanf("%d", &sub_three);
	printf("Enter marks for \"English\" :: ");
	scanf("%d", &sub_four);
	printf("Enter marks for \"Graph Theory and Combinetorics\" :: ");
	scanf("%d", &sub_five);
	
	average = (sub_one+sub_two+sub_three+sub_four+sub_five)/5;

	if (average <= 100 && average >90) {

		printf("Grade :: A\n");

	} else if(average <= 90 && average >80) {

		printf("Grade :: B\n");

	} else if(average <= 80 && average >70) {

		printf("Grade :: C\n");

	} else if (average <= 70 && average >60) {

		printf("Grade :: D\n");

	} else if (average <= 60 && average >=50) {

		printf("Grade :: E\n");

	} else if (average < 50) {

		printf("Grade :: F\n");

	} else {
		printf("Your average marks is %d.You have entered an invalid marks combination . retry running the program.\n", average);
	}  

	return 0;
}
