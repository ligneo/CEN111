#include <stdio.h>
#include <stdbool.h>

    int
    main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    bool is_prime = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
    {
        printf("%d is prime\n", n);
    }
    else
    {
        printf("%d is not prime\n", n);
    }
    return 0;
}
