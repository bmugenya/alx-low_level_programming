#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string 
 * @accept: acceptable bytes
 * Return: the number of bytes in the initial segmet  
*/

unsigned int _strspn(char *s, char *accept)
{

  int index, x;
  int pref = 0;

  for (index = 0; s[index] != '\0'; index++)
    {
      for (x = 0; accept[x] != 0; x++)
	{
	  if (accept[x] == s[index])
	    {
	      pref++;
	      break;
	    }
	}
      if (pref != index + 1)
	return (pref);

    }
  
      return (pref);
}
  
