#include <stdio.h>

int main(void) {
    printf("Enter an integer: ");
    int n;
    scanf("%d", &n);

    int num_digits = 0;
    while (n > 0) {
        num_digits++;
        n /= 10;
    }

    printf("The number has %d digits.\n", num_digits);

    return 0;
}
