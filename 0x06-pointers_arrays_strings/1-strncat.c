#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: new destination of string
 * @src: source of the string 
 * @n: numer of bytes 
* Return: the new string
 */

char *_strcat(char *dest, char *src, int n)
{
  int index = 0;
  int dest_size = 0;

  while (dest[index++])
    dest_index++;

  for (index = 0; src[index] && index < n; index++)
    dest[dest_size++] = src[index];
  
  return (dest);

}
