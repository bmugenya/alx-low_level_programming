#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @x: natural number 
 */

void print_to_98(int x)
{
  if (x <= 98)
      {
        while (x < 98)
        {
	  printf("%d", x);
         printf(", ");
          x++;
        }
    }
    else
      {
        while (x > 98)
        {
	  printf("%d", x);
          printf(", ");
	  x--;
        }
      }
}
