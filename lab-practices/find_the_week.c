#include <stdio.h>
#include <stdlib.h>

int
main (void)
{
  int week;
  printf ("please enter a number between 1 and 7\n ");
  scanf ("%d", &week);

  switch (week)

    {
    case 1:
      printf ("Monday");
      break;
    case 2:
      printf ("Thuesday");
      break;
    case 3:
      printf ("Wednesday");
      break;
    case 4:
      printf ("Thursday");
      break;
    case 5:
      printf ("Friday");
      break;
    case 6:
      printf ("Saturday");
      break;
    case 7:
      printf ("Sunday"); 
      break;

    default:
      printf ("invalid input !Enter a number between 1 and 7");
    }

  return 0;
}
