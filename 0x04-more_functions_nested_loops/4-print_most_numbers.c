
#include "main.h"

/**
 * print_most_numbers - prints the digit from 0 to 9 apart from 2 and 4, followed by a new line
*/

void print_most_numbers(void)
{
  int x;
  
  for (x = 0; x <= 9; x++)
    if (x != 2 && x != 4)
      _putchar(x + '0');

  _putchar('\n');
}
