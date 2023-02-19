#include <stdio.h>
/**
 * main - prints all the numbers of base 16
 *
 * Return: Always 0
 */

int main(void)
{
  int x;
  for (x = '0'; x <= '9'; x++)
    putchar(x);
  for (x = 'a'; x <= 'f'; x++)
    putchar(x);
  putchar('\n');
  return (0);
}
