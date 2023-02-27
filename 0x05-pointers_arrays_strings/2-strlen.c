#include "main.h"

/**
* _strlen -  returns the length of a string
* @s: string to get the length
*/

void _strlen(char *s)
{
  int str_length;

  for(str_length = 0; s[str_length] != '\0'; ++str_length);

  return (str_length);
}
