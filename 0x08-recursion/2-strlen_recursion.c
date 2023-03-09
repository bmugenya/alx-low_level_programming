#include "main.h"

/**
 * _strlen_recursion - output length of characters and strings 
 * @s: character to be outpute in the stdout
 * Return: length of strings
*/


int _strlen_recursion(char *s)
{

  if (*s == '\0')
    return (0);

  s++;
  return (_strlen_recursion(++s));
 

}
