#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer of type char
 * @b: constant type byte
 * @n: number of bytes of the memory
 * Return: a pointer with the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int index;

  for (index = 0; index < n; ++index)
    {
      *(s + index) = b;
    }
  return (s);
}
