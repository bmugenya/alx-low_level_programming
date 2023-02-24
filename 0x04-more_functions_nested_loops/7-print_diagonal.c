#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *@n: integer that determines the length of the line
 */

void print_diagonal(int n)
{
  int x = 0;
  int j;

  while(n > x)
    {
      
	_putchar('\\');
	for (j = 1; j <= x; j++)
	  {
	  _putchar('\n');
	  _putchar(' ');
	  }
	x++;
    }

  _putchar('\n');
}
