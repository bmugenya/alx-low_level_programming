#include "main.h"

/**
* print_rev -  prints a string, in reverse, followed by a new line
* @s: string to be printed in reverse
*/

void print_rev(char *s)
{
   int index = 0, len = 0;

  while (s[index++])
    len++;

  for(index = len -1; index >= 0; index--)
    _putchar(s[index]);
  _putchar('\n');
}
