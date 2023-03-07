#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * @s: a string 
 * @accept: accepted bytes in the string
 * Return: pointer to the byte in a string
 */

char *_strpbrk(char *s, char *accept)
{
  int index, x;

  for (index = 0; s[index] != '\0'; index++)
    {
      for (x = 0; accept[x] != '\0'; x++)
	{
	  if (s[index] == x[accept])
	    return (s + x);
	}
    }
  return ('\0');
}
