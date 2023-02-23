#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *@n: integer that determines the length of the line
 */

void print_diagonal(int n)
{
  int x = 1;

  while(x <= n)
    {
	_putchar('\\');
	_putchar('\n');
	x++;
    }

  _putchar('\n');
}
