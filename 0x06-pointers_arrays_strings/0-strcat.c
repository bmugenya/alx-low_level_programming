#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: new destination of string
 * @src: source of the string 
 * Return: the new string
 */

char *_strcat(char *dest, char *src)
{
  int index = 0;
  int dest_size = 0;

  while (dest[index])
    index++;

  for (dest_size = 0; src[dest_size]; dest_size++)
    dest[index++] = src[dest_size];
  
  return (dest);

}
