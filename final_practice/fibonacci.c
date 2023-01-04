#include <stdio.h>

int fib(int num)
{

    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
        return fib(num - 1) + fib(num - 2);
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = fib(num);
    printf("The Fibonacci number at position %d is %d\n", num, result);

    return 0;
}
