#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @x: natural number 
 */

void print_to_98(int x)
{
  if (x < 98)
      {
        while (x < 98)
        {
           _putchar(x);
           _putchar(',');
           _putchar(' ');
          x++;
        }
    }
    else
      {
        while (x > 98)
        {
	  _putchar(x);
	  _putchar(',');
	  _putchar(' ');
	  x--;
        }
      }
}
