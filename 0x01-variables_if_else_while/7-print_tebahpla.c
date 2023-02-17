#include <stdio.h>

/**
 * main - prints the alphabe in reverse
 *
 * Return: Always 0
 */

int main(void)
{
  int x;
  for ( x = 'x'; x >= 'a'; x--)
    putchar(x);
  putchar('\n');
  return (0);
}
