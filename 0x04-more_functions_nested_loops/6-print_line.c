#include "main.h"

/**
 * print_line - prints a straight line
 *@n: integer that determines the length of the line
 */

void print_line(int n)
{
  int x = 0;

  while(n > x)
    {
	_putchar('_');
	x++;
    }

  _putchar('\n');
}
