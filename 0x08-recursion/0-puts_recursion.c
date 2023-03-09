#include "main.h"

/**
 * _puts_recursion - output of characters and strings
 * @s: character to be outpute in the stdout
 */

void _puts_recursion(char *s)
{

  if (*s == '\0')
  {
    _putchar('\n');
    return;
  }
  _putchar(*s);
  _puts_recursion(++s);

}
