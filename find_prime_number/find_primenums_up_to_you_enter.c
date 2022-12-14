#include <stdio.h>

int main(void) {
  int i, j;
  int max;

  printf("Enter a maximum number: ");
  scanf("%d", &max);

  printf("Prime numbers up to %d: \n", max);

  for (i = 2; i <= max; i++) {
    for (j = 2; j < i; j++) {
      if (i % j == 0) break;
    }
    if (i == j) {
      printf("%d ", i);
    }
  }

  printf("\n");

  return 0;
}
