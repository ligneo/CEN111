#include <stdio.h>

int main(void) {
  int i;
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n < 2) {
    printf("%d is not a prime number.\n", n);
    return 0;
  }

  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      printf("%d is not a prime number.\n", n);
      return 0;
    }
  }

  printf("%d is a prime number.\n", n);

  return 0;
}
