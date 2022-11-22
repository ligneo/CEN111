#include<stdio.h>
//ver 1: i made a big mistake in exam paper REGRETS!!!


int main(void){

	int entered_year;
	printf("Please enter year you want to learn leap year or not?\n");
	scanf("%d", &entered_year);

	//leap year divisible 400 and 4 but it is not divisible 400 althought divisible to 100 is not leap year

	if (entered_year%400 == 0 || entered_year%4 == 0 && entered_year%100 != 0)
		printf ("The year you entered is a leap year!");
	else
		printf ("The year you entered is not a leap year!");
	
	return 0;
}

	
