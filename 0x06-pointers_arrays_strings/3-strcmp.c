#include "main.h"

/**
 * strcmp - compares two string 
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if s1 and s2 equal, negative if s2 is greater and posituve if s1 is grater
 */

int _strcmp(char *s1, char *s2)
{
  while ((*s1 && *s2) && (*s1 == *s2))
    {
       s1++;
       s2++;
    }
  return (*s1 - *s2);

}
