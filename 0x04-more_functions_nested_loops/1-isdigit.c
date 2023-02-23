#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @x: digit to be checked
 * Return: 1 if x is digit, and 0 otherwise
 */

int _isdigit(int x)
{
  if (x >= '0' && x <= '9')
    return (1);
  else
    return (0);

}
