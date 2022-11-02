#include <stdio.h>
#include <stdlib.h>

int
main (void)
{
  int number;
  printf ("please enter a number ");
  scanf ("%d", &number);

  if (number % 2 == 0)
    printf ("the number is a even number");


  else
    printf ("The number is off\n motherfucker!");

  return 0;
}
