#include<stdio.h>
#include<math.h>


int fact(int);

int main (void){

    printf("Please enter a number: ");
    int x;
    scanf("%d", &x);
    printf("Factorial of the %d number: %d", x, fact(x));

    return 0;

}


int fact(int x){

    int result = 1;

    for(int i = 1; i <= x; i++){

        result *= i;
    }

    return result;

}




