#include "main.h"

/**
 * _islower - checks for lowercase character
 * @x : letter to be checked
 * 
 * Return: 1 if letter is lowercase or uppercase, 0 otherwise
 */

int _isalpha(int x)
{
  if ((x >= 'a' && x <= 'z') ||
      (x >= 'A' && x <= 'Z'))
    return (1);
  else
    return (0);
}
