#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: new destination of string
 * @src: source of the string 
 * @n: numer of bytes 
* Return: the new string
 */

char *_strncpy(char *dest, char *src, int n)
{
  int index = 0;
  int dest_size = 0;

  while (src[index++])
    dest_size++;

  for (index = 0; src[index] && index < n; index++)
    dest[index] = src[index];

  for (index = dest_size; index < n; index++)
    dest[index] = '\0';
  
  return (dest);

}
