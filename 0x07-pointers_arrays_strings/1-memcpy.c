#include "main.h"

/**
 * _memcpy - copies memory data
 * @dest: destination for the memory area
 * @src: source of the memory area
 * @n: number of bytes from memory area
 * Return: pointer to the destinatiom of the memory area 
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int index;

  for (index = 0; index < n; index++)
    {
      *(dest + index) = *(src + index);
    }
  return (dest);
}
