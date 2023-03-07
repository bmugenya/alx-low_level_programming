#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: a string
 * @needle: first occurance of a string
 * Return: Apointer to the begining f the located substring
 */

char *_strstr(char *haystack, char *needle)
{
  int index = 0;

  for (; *haystack != 0; haystack++)
    {
      while (haystack[index] == needle[index])
	{
	  if (needle[index] == '\0')
	    return (haystack);

	  index++;
	}
    }
	
  return ('\0');
}
