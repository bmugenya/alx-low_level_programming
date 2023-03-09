#include "main.h"

/**
 * _print_rev_recursion - output of characters and strings in reverse
 * @s: character to be outpute in the stdout
 */

void _print_rev_recursion(char *s)
{

  if (*s == '\0')
    return;

  _print_rev_recursion(++S);
  _putchar(*s);

}
