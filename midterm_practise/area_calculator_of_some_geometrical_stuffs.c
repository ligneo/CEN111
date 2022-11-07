#include<stdio.h>
#include<stdlib.h>

/*

use the switch keys structures and write a program that calculate the are of some geometrical things

1- square
2- triangle
3- circle   P.S:  2. PI. r

*/


int main(void)
{
	int edge = 0, heigh = 0, radius = 0;
	int choice;
	int radix=0;

    

    printf("--- Which geometric shape would you like to calculate the area of? \n" );
    printf("1- square\n2- triangle\n3- circle\n\n");
    scanf("%d", &choice); printf("\n");


    switch(choice){

    	case 1:
    		printf("enter the value of the one side of square");
    		scanf("%d", &edge); printf("\n");
    		printf("the are of square: %d", (edge*edge));
    		break;

    	case 2:
    		printf("enter the radix of the triangle");
    		scanf("%d", &radix); printf("\n");
    		printf("enter the heigh of the triangle");
    		scanf("%d", &heigh); printf("\n");
    		printf("the are of square: %d ", (radix*heigh)/2);
    		break;

    	case 3:
    		printf("enter the radius of the circle");
    		scanf("%d", &radius); printf("\n");
    		printf("the are of square: %d ", (2*3*radius));
    		break;

    	default:
    		printf("Invalid coice.");
    	
    }





	return 0;
}
