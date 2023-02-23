#include "main.h"

/*
 * _isupper - checks for uppercase character
 * @x: letter to be checked
 * Return: returns 1 if x is uppercase, and 0 otherwise
 */

int _isupper(int x)
{
  if (x >= 'A' && x <= 'Z')
    return (1);
  else
    return (0);

}
