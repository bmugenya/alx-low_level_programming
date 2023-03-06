#include "main.h"

/** 
 * _strchr - locates a character in a string
 * @s: string of characters
 * @c: character from s
 * Return: a pointer to the first occurance f a string
 */

char *_strchr(char *s, char c)
{
  int index;

  for (index = 0; s[index] >= '\0'; index++)
    {
      if (s[index] == c)
	return (s + index);

    }
  return ('\0');

}
