#include <stdio.h>
/**
 * main - print all poossible combinations of single-digit numbers
 * 
 * Return - Always 0
 */
int main(void)
{
  int x;
  for (x = 0; x < 10; x++)
  {
     putchar('%d', x);
     if (x < 9)
       putchar(', ');
  }
  putchar('\n');
  return (0);

}
