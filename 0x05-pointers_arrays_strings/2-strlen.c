#include "main.h"

/**
* _strlen -  returns the length of a string
* @s: string to get the length
*/

void _strlen(char *s)
{
  size_t str_length;

  for(str_lenth = 0; s[str_length] != '\0'; ++str_length);

  return (str_length);
}
