#include <stdio.h>

int main(void)
{
    int number;

    printf("please enter a number");
    scanf("%d", &number);

    if (number < 0)
        printf("the number is negative");


    else if (number > 0)
        printf("the number is positive");
    else
        printf("the number is 0");

    return 0;
}