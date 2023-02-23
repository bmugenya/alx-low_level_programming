#include "main.h"

/**
 * print_line - prints a straight line
 *@n: integer that determines the length of the line
 */

int print_line(int n)
{
  int x;
  
  for (x = 0; x < n; x++)
  {
     if (n > 0)
      _putchar('_');
  }
  _putchar('\n');
}
