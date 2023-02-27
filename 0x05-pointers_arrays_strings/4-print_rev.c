#include "main.h"

/**
* print_rev -  prints a string, in reverse, followed by a new line
* @s: string to be printed in reverse
*/

void print_rev(char *s)
{
  int index = 0, len = 0;
  char x;

  while (s[index++])
    len++;

  for(index = len -1; index >= len / 2; index--)
    {
      x = s[index];
      s[index] = s[len - index -1];
      s[len - index -1] = x;
    }
}
