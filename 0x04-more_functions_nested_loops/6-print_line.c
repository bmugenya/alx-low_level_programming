#include "main.h"

/**
 * print_line - prints a straight line
 *@n: integer that determines the length of the line
 */

int print_line(int n)
{
  int x = 1;

  while(x < n)
    {
	_putchar('_');
	x++;
    }

  _putchar('\n');
}
