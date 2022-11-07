#include <stdlib.h>
#include <stdio.h>

/*

in this question th used structures are : 
printf and loop

QUESTION is : 

make a programe tha tcan calculate the factorial of the numbers writen by keyboard 

*/


int main()
{

	int num_one, i, fact=1;

	



	printf("please enter the number that you want the calculated: ");
	scanf("%d",&num_one); printf("\n");

	




	for(i=1;i<=num_one;i++){

		fact = fact * i ;
	}


	printf("the factorial of the number you request:  %d", fact);

	return 0;
}
