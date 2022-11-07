/*
the structures that used in this problem:

printf, scanf, determination companents(?)

the question:

write the parking fee acording to the entered value by keyboard by using C programmingo 
languago

#l saat => 3TL
#2 saat => 6 TL 
#4-6 saat => 8 TL 
#6-10 saat => 10TL

after the 10 hour for per hour the fee will be increased 1 ducking TL 

let's go 

*/

#include<stdio.h>
#include <stdlib.h>

int main(void){

	int fee, spending_parking_time;


	printf("What is the spending time at park: ");
	scanf("%d", &spending_parking_time);

	if (spending_parking_time<=1 &&spending_parking_time>0){
		fee = 3;

	}else if (spending_parking_time<=4 &&spending_parking_time>1){
		fee = 9;

	}else if (spending_parking_time<=6 &&spending_parking_time>4){
		fee = 17;

	}else if (spending_parking_time<=10 &&spending_parking_time>6){
		fee = 27;

	}else if (spending_parking_time>=10){
		spending_parking_time = spending_parking_time - 10;
		fee = 27 + spending_parking_time;

	}else{
		printf("\n\n your car isn't staying at park...\n\n");
	}


	printf("\n\n the fee that you have to pay : %d", fee);







	return 0;
}
