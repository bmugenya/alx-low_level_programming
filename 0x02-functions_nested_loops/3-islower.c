#include "main.h"

/**
 * _islower - checks for lowercase character
 * @x : letter to be checked 
 * Return : (1) Success or (0) fal
 */

int _islower(int x)
{
  if (x >= 'a' && x <= 'z')
    return (1);
  else
    return (0);
}
