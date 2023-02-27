#include "main.h"

/**
* _strcpy -  copies the string pointed to by src, including the
*                 terminating null byte (\0), to the buffer pointed to by dest
* @dest: destination for the string
* @src: source of string
* Return: pointer of the string stored in dest
*/


char *_strcpy(char *dest, char *src)
{
  int index;

  for (index = 0; src[index] != '\0'; index++)
    dest[index] = src[index];

  dest[index] = src[index];

  return (&dest[0]);
}
